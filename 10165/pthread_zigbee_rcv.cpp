#include "link_list.h"
#include "data_global.h"



extern int dev_uart_fd;

extern linklist envlinkHead;
extern pthread_mutex_t mutex_linklist;
extern pthread_cond_t cond_refresh;



void *pthread_zigbee_rcv (void *arg)
{
    int i = 0, len;
    char flag = 0, check;
    link_datatype buf;

    envlinkHead = CreateEmptyLinklist ();//在ZigBee接收函数里面创建一个链表
#if 1
    if ((dev_uart_fd = open (DEV_ZIGBEE, O_RDWR)) < 0)  //打开串口设备
    {
        perror ("open ttyUSB0 fail");
    //	exit (-1);
    //	return -1;
    }
    serial_init(dev_uart_fd);//初始化串口设备

    printf ("pthread_transfer is ok\n");

#endif
    while (1)
    {

        memset (&buf, 0, sizeof (link_datatype));//将buf清空，buf为接收串口数据的缓冲区
        read (dev_uart_fd, &check, 1);//从串口接收数据，接收一个字节
 /*       if (check == 'c')
        {
            sendMsgQueue(MSG_ZIGBEE,MSG_CONNECT_SUCCESS);
        }*/
        if (check == 's')
        {
            check = 0;
            read (dev_uart_fd, &check, 1);
            if (check == 't')
            {
                check = 0;
                read (dev_uart_fd, &check, 1);
                if (check == ':')
                {
                    check = 0;
                    read (dev_uart_fd, &check, 1);
                    if (check == 'e')
                    {
                        buf.msg_type = 'e';
                        usleep(1);
                        if ((len = read (dev_uart_fd, buf.text, LEN_ENV)) != LEN_ENV)//读取数据放在buftext中
                        {
                            for (i = len; i < LEN_ENV; i++)
                            {
                                read (dev_uart_fd, buf.text+i, 1);//循环读取确保读完
                            }
                        }
                        flag = 1;//标志位置一，只有标志位置一了才会将数据放在链表里面
                    }
                }
            }
        }

        if (1 == flag)
        {
            pthread_mutex_lock (&mutex_linklist);//在操作链表时将链表上锁
            //接收到的额数据加入到链表中
            if ((InsertLinknode (buf)) == -1)
            {
                pthread_mutex_unlock (&mutex_linklist);//出错退出的话要把链表解锁再退出
                printf ("NONMEM\n");
            }
            pthread_mutex_unlock (&mutex_linklist);
            flag = 0;//放入链表完成，标志位置一继续下一次读取，
            pthread_cond_signal (&cond_refresh);//有新的数据放入链表以后唤醒刷新线程
        }

    }
    return 0;
}
