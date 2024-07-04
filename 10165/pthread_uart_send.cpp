#include "data_global.h"

extern unsigned char dev_uart_mask;
extern int dev_uart_fd;

extern pthread_cond_t cond_uart_cmd;

extern pthread_mutex_t mutex_uart_cmd;

extern uart_cache_list zigbee_cache_head, zigbee_cache_tail;

void *pthread_uart_send (void *arg)
{
    unsigned char *uart_p = NULL;
    uart_cache_list uart_cache_p = NULL;
    printf ("pthread_uart_send is ok\n");
    while (1)
    {

        pthread_mutex_lock (&mutex_uart_cmd);//锁住串口操作的锁
        pthread_cond_wait (&cond_uart_cmd, &mutex_uart_cmd);//等待操作串口的的信号量，被唤醒以后上锁，开始操作串口
        while ((uart_cache_p = GetCacheNode (zigbee_cache_head, &zigbee_cache_tail)) != NULL)//获取第一个节点的数据
        {
            pthread_mutex_unlock (&mutex_uart_cmd);//获取完连链表第一个节点数据就可以放开串口锁了，就是让链表可以继续接收数据
            uart_p = (unsigned char *)uart_cache_p->data;
            dev_uart_mask = *uart_p;

            write (dev_uart_fd, &dev_uart_mask, 1);

            printf("\tuart:m0 cmd = %x\n", dev_uart_mask);
            free (uart_p);
            uart_p = NULL;
            free (uart_cache_p);
            uart_cache_p = NULL;
            usleep (200000);
            pthread_mutex_lock (&mutex_uart_cmd);//把链表锁住继续读，直到把链表数据读完。
        }
        pthread_mutex_unlock (&mutex_uart_cmd);
    }
}
