#include <arpa/inet.h>

#include "sem.h"
#include "data_global.h"
#include "link_list.h"
#include <stdio.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <pthread.h>
#include <termios.h>
#include <syscall.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/msg.h>
#include <sys/sem.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/ioctl.h>
#include <linux/fs.h>
#include <linux/ioctl.h>
static unsigned char device_address;
static int register_address;
static int data_length;
static unsigned char CMD;
static int crc16;
static unsigned char crc16_low;
static unsigned char crc16_high;
extern int sg_fd;

#define commad_fastflash 3      //指示灯爆闪指令
#define commad_slowflash 4      //指示灯慢闪指令
#define commad_steadyon 5       //指示灯常亮指令
#define commad_close 6          //指示灯关闭
#define N 1024

extern int flash_code ;

extern pthread_mutex_t mutex_refresh;
extern pthread_mutex_t mutex_refresh_updata;
extern pthread_mutex_t mutex_global;
extern pthread_mutex_t mutex_slinklist;
extern pthread_cond_t cond_refresh;
extern pthread_cond_t cond_refresh_updata;
extern pthread_mutex_t mutex_linklist;

extern char qt_status;
extern int shmid;
extern int semid;
extern struct env_info_array all_info_RT;
extern linklist envlinkHead, envlinkTail;

struct env_info current1;
struct env_info current2;
struct env_info current;
//int ep_no;

extern int temperature_flag,light_flag,shidu_flag,hongwai_flag,gas_flag;
extern int temperature_warn,light_warn,shidu_warn,hongwai_warn,gas_warn;
int temp_wd1,temp_light1,temp_shidu1,temp_gas1,temp_hongwai1;
int temp_wd2,temp_light2,temp_shidu2,temp_gas2,temp_hongwai2;
int flag1,flag2,flag3,flag4,flag5,flag6,flag7,flag8,flag9,flag10,flag11;
int flag12,flag13,flag14,flag15,flag16,flag17,flag18,flag19,flag20,flag21,flag22;

//void serial_init(int fd) ;
int crc_algorithm(unsigned char* dat);
int write_commad(int id,unsigned char cmd);
struct shm_addr
{
   char cgi_status;
   char qt_status;
   struct env_info_array rt_status;
};


struct getEnvMsg
{
   unsigned char tem[2];
   unsigned char hum[2];
   unsigned char ep_no;
   unsigned char x;
   unsigned char y;
   unsigned char z;

   unsigned short hongwai;
   unsigned short lux;			//光照  2个字节
   unsigned short rsv2;
   unsigned short gas;			//烟雾
   unsigned short rsv3;
   unsigned short adc;
};
void getEnvPackage (link_datatype *buf)
{
   struct getEnvMsg pack;
   float temh;//,teml;
   int ep_no;

   memcpy (&pack, buf->text, LEN_ENV);
   ep_no = pack.ep_no;

   pthread_mutex_lock (&mutex_global);
   //struct env_info
   current = all_info_RT.env_no[ep_no];//用设备号来确定当前信息是哪个设备的，这步其实不用问题也不大
   pthread_mutex_unlock (&mutex_global);


   current.storage_status = 1;//因为有这个设备号对应的设备传来的信息，所以将此设备的状态写为1，意思是此设备是开启状态
   current.x = pack.x;//然后接下来就是把信息传给这个结构体保存
   current.y = pack.y;
   current.z = pack.z;

   temh =  pack.tem[1];
   //teml =  pack.tem[0];
   current.temperature = temh;

   temh =  pack.hum[1];
   //teml =  pack.hum[0];
   current.humidity = temh;

   current.illumination = (unsigned short)pack.lux;//光强

   current.gas = (unsigned short)pack.gas;//烟雾

   current.hongwai = pack.hongwai;

   if(ep_no==1)
   {
       current1=current;
        if(temperature_flag)
               {
               if(current1.temperature>temperature_warn)
               {
                if(temp_wd1<=temperature_warn && current1.temperature>temperature_warn)
                    system("sudo sh -c  'echo one > /tmp/webcom' ");
               }
                 write_commad(sg_fd,flash_code);
               }




              if(shidu_flag){
               if(temp_shidu1<=shidu_warn && current1.humidity>shidu_warn)
              system("sudo sh -c  'echo one > /tmp/webcom' ");

              if(current1.humidity>shidu_warn)
               write_commad(sg_fd,flash_code);
              }
               
               if(light_flag)
               {
               if(temp_light1<=light_warn && current1.illumination>light_warn)
                system("sudo sh -c  'echo one > /tmp/webcom' ");
               if(current1.illumination>light_warn)
               {
                   printf("shit\n");
                  write_commad(sg_fd,flash_code);
               }
               }

               
               if(gas_flag){
               if(temp_gas1<=gas_warn && current1.gas>gas_warn)
              system("sudo sh -c  'echo one > /tmp/webcom' ");

               if(current1.gas>gas_warn)
              write_commad(sg_fd,flash_code);
              }

              if(hongwai_flag){
               if(temp_hongwai1<hongwai_warn && current1.hongwai==hongwai_warn)
               system("sudo sh -c  'echo one > /tmp/webcom' ");
               
               if(current1.hongwai==hongwai_warn)
               write_commad(sg_fd,flash_code);
               
               }
                           temp_wd1 = current1.temperature ;
               temp_shidu1 = current1.humidity ;
              temp_light1 = current1.illumination ;
              temp_gas1 = current1.gas ;
               temp_hongwai1 = current1.hongwai ;
   }
   else if(ep_no==2)
   {
       current2=current;
               if(temperature_flag)
               {
               if(current2.temperature>temperature_warn)
               {
                if(temp_wd2<=temperature_warn && current2.temperature>temperature_warn)
                    system("sudo sh -c  'echo one > /tmp/webcom' ");
               }
                 write_commad(sg_fd,flash_code);
               }




              if(shidu_flag){
               if(temp_shidu2<=shidu_warn && current2.humidity>shidu_warn)
              system("sudo sh -c  'echo one > /tmp/webcom' ");

              if(current2.humidity>shidu_warn)
               write_commad(sg_fd,flash_code);
              }
               
               if(light_flag)
               {
               if(temp_light2<=light_warn && current2.illumination>light_warn)
               {
                system("sudo sh -c  'echo one > /tmp/webcom' ");
                printf("shit\n");
               }
               if(current2.illumination>light_warn)
               {
                  write_commad(sg_fd,flash_code);
               }
               }

               
               if(gas_flag){
               if(temp_gas2<=gas_warn && current2.gas>gas_warn)
              system("sudo sh -c  'echo one > /tmp/webcom' ");

               if(current2.gas>gas_warn)
              write_commad(sg_fd,flash_code);
              }

              if(hongwai_flag){
               if(temp_hongwai2<hongwai_warn && current2.hongwai==hongwai_warn)
               system("sudo sh -c  'echo one > /tmp/webcom' ");
               
               if(current2.hongwai==hongwai_warn)
               write_commad(sg_fd,flash_code);
               
               }
                           temp_wd2 = current2.temperature ;
               temp_shidu2 = current2.humidity ;
              temp_light2 = current2.illumination ;
              temp_gas2 = current2.gas ;
               temp_hongwai2 = current2.hongwai ;
   }

//    printf ("ep_no = %d tem = %0.2f hum = %0.2f ill = %d  gas = %d hongwai=%d\n",
//            ep_no,current.temperature, current.humidity, current.illumination, current.gas,current.hongwai);

   //checkEnv (sto_no, &current);

   pthread_mutex_lock (&mutex_global);
   all_info_RT.env_no[ep_no] = current;//获取完信息后将结构体的信息赋给设备号对应的结构体保存，因为后面使用此式左边的结构体数组来与共享内存交互
   pthread_mutex_unlock (&mutex_global);

   return ;
}

void *pthread_refresh (void *arg)
{
   key_t key_info;
   int shmid, semid;
   linklist node;
   link_datatype buf;
   flash_code=3;

   if ((sg_fd = open ("/dev/ttyUSB1", O_RDWR|O_NOCTTY|O_NDELAY)) < 0)
	{
        printf ("1\n");
		perror ("open ttyUSB1 fail");
	//	exit (-1);
	//	return -1;
	}
    serial_init1(sg_fd);

   struct shm_addr *shm_buf;

   if ((key_info = ftok ("/app", 'i')) < 0)//创建一个唯一的key
   {
       perror ("ftok info");
       exit (-1);
   }

   if ((semid = semget (key_info, 1, IPC_CREAT | IPC_EXCL |0666)) < 0)//获取一个信号量id
   {
       if (errno == EEXIST)
       {
           semid = semget (key_info, 1, 0666);
       }
       else
       {
           perror ("semget");
           exit (-1);
       }
   }
   else
   {
       init_sem (semid, 0, 1);//将信号量初始化为下标0，信号量资源1
   }

   if ((shmid = shmget (key_info, N, IPC_CREAT | IPC_EXCL | 0666)) < 0)//获取一个共享内存id
   {
       if (errno == EEXIST)
       {
           shmid = shmget (key_info, N, 0666);
           shm_buf = (struct shm_addr *)shmat (shmid, NULL, 0);//如果这个id已经存在，就直接映射，shm_buf为映射后的地址

       }
       else
       {
           perror ("shmget");
           exit (-1);
       }

   }
   else
   {
       if ((shm_buf = (struct shm_addr *)shmat (shmid, NULL, 0)) == (void *)-1)
       {
           perror ("shmat");
           exit (-1);
       }
   }

   bzero (shm_buf, sizeof (struct shm_addr));//将映射后的地址清空
   printf ("pthread_refresh is ok\n");

   while (1)
   {

       pthread_mutex_lock (&mutex_refresh);//锁住刷新线程的锁
       pthread_cond_wait (&cond_refresh, &mutex_refresh);//打开锁等待被唤醒，唤醒后自动获取锁
       while (1)
       {
           pthread_mutex_lock (&mutex_linklist);//将链表锁锁住
           if ((node = GetLinknode (envlinkHead)) == NULL)//返回链表的头结点，如果为空链表就解锁跳出循环
           {
               pthread_mutex_unlock (&mutex_linklist);
               break;
           }
           buf = node->data;//取出头结点的数据
           free (node);//指针变量使用完一定要记得free掉
           pthread_mutex_unlock (&mutex_linklist);//解锁链表

           if ('e' == buf.msg_type)
           {
               getEnvPackage (&buf);

            //    if(temperature_flag)
            //    {
            //    if(current.temperature>temperature_warn)
            //    {
            //     if(temp_wd<=temperature_warn && current.temperature>temperature_warn)
            //         system("sudo sh -c  'echo one > /tmp/webcom' ");
            //    }
            //      write_commad(sg_fd,flash_code);
            //    }




            //   if(shidu_flag){
            //    if(temp_shidu<=shidu_warn && current.humidity>shidu_warn)
            //   system("sudo sh -c  'echo one > /tmp/webcom' ");

            //   if(current.humidity>shidu_warn)
            //    write_commad(sg_fd,flash_code);
            //   }
               
            //    if(light_flag)
            //    {
            //    if(temp_light<=light_warn && current.illumination>light_warn)
            //     system("sudo sh -c  'echo one > /tmp/webcom' ");
            //    if(current.illumination>light_warn)
            //    {
            //        printf("shit\n");
            //       write_commad(sg_fd,flash_code);
            //    }
            //    }

               
            //    if(gas_flag){
            //    if(temp_gas<=gas_warn && current.gas>gas_warn)
            //   system("sudo sh -c  'echo one > /tmp/webcom' ");

            //    if(current.gas>gas_warn)
            //   write_commad(sg_fd,flash_code);
            //   }

            //   if(hongwai_flag){
            //    if(temp_hongwai<hongwai_warn && current.hongwai==hongwai_warn)
            //    system("sudo sh -c  'echo one > /tmp/webcom' ");
               
            //    if(current.hongwai==hongwai_warn)
            //    write_commad(sg_fd,flash_code);
               
            //    }

            flag1=(temperature_flag==1 && current1.temperature < temperature_warn);
            flag2=(temperature_flag==0);
            flag3=(shidu_flag==0);
            flag4=(shidu_flag==1 && current1.humidity < shidu_warn);
            flag5=(light_flag==1 && current1.illumination < light_warn);
            flag6=(light_flag==0 );
            flag7=(gas_flag==1 && current1.gas < gas_warn);
            flag8=(gas_flag==0 );
            flag9=(hongwai_flag==1 && current1.hongwai < hongwai_warn);
            flag10=(hongwai_flag==0);

            flag12=(temperature_flag==1 && current2.temperature < temperature_warn);
            flag13=(temperature_flag==0);
            flag14=(shidu_flag==0);
            flag15=(shidu_flag==1 && current2.humidity < shidu_warn);
            flag16=(light_flag==1 && current2.illumination < light_warn);
            flag17=(light_flag==0 );
            flag18=(gas_flag==1 && current2.gas < gas_warn);
            flag19=(gas_flag==0 );
            flag20=(hongwai_flag==1 && current2.hongwai < hongwai_warn);
            flag21=(hongwai_flag==0);

            flag22 = ((flag12 || flag13) & (flag14 || flag15) & (flag16 || flag17) & (flag18 || flag19) & (flag20 || flag21));

            flag11 = ((flag1 || flag2) & (flag3 || flag4) & (flag5 || flag6) & (flag7 || flag8) & (flag9 || flag10));
            if((flag11 & flag22))
             {
                // printf("fuck\n");
                write_commad(sg_fd,commad_close);
             }

               //if(current.hongwai<hongwai_warn && current.gas<gas_warn && current.illumination<light_warn && current.humidity<shidu_warn && current.temperature<temperature_warn)
              // write_commad(sg_fd,commad_close);

            // printf("%d,%d,%d,%d,%d\n",flag1,flag2,flag3,flag4,flag5);
            // printf("%d,%d,%d,%d,%d\n",flag6,flag7,flag8,flag9,flag10);
            // printf ("flag11:%d\n",flag11);
            //    printf ("hongwai:%d\n",hongwai_flag);
            //     printf ("light:%d\n",light_flag);
            //     printf ("light_warn:%d\n",light_warn);
            //     printf("flash_code:%d\n",flash_code);
            //   temp_wd = current.temperature ;
            //    temp_shidu = current.humidity ;
            //   temp_light = current.illumination ;
            //   temp_gas = current.gas ;
            //    temp_hongwai = current.hongwai ;
           }
       }
       //共享内存shm_buf需要由进程信号量来控制互斥访问
       sem_p (semid, 0);//对下标为0的信号量进行p操作，因为共享内存是进程间通信，所以需要信号量
       pthread_mutex_lock (&mutex_global);
       shm_buf->rt_status = all_info_RT;
       pthread_mutex_unlock (&mutex_global);
       sem_v (semid, 0);
       pthread_mutex_unlock (&mutex_refresh);//将刷新线程锁解锁
   }
   return 0;
}

int crc_algorithm(unsigned char* dat)
{
    int i,j;
    int temp=0xffff;
    unsigned char *p;
    unsigned char data_crc[6];
    p=dat;
    for(i=0;i<6;i++)
    {data_crc[i]=*p; p++;}
    for(i=0;i<6;i++)
    {
        temp=temp^data_crc[i];
        for(j=0;j<8;j++)
        {
            if(temp&0x0001)
            {
                temp=temp>>1;
                temp=temp&0x7fff;
                temp=temp^0xa001;
            }
            else
            {
                temp=temp>>1; temp=temp&0x7fff;
            }
        }
    }
    return temp;
}
int write_commad(int id,unsigned char cmd)
{
    int fd=id;
    unsigned char buff[10];
    unsigned char rx[10];
    unsigned char data_high;
    unsigned char data_low;
    int temp;
    switch(cmd)
    {
        case commad_fastflash:
        {
    device_address=0xff;
    register_address=0x00c2;
    data_length=0x0003;
    CMD=0x06;
    }break;
    case commad_slowflash:
    {
        device_address=0xff;
        register_address=0x00c2;
        data_length=0x0004;
        CMD=0x06;
    }break;
    case commad_steadyon:
    {
        device_address=0xff;
        register_address=0x00c2;
        data_length=0x0005;
        CMD=0x06;
    }break;
    case commad_close:
    {
        device_address=0xff;
        register_address=0x00c2;
        data_length=0x0006;
        CMD=0x06;
    }break;
    }
    memset(buff,0,10);
    memset(rx,0,10);
    buff[0]=device_address;
    buff[1]=CMD;
    buff[2]=register_address>>8;
    buff[3]=register_address&0x00ff;
    buff[4]=data_length>>8;
    buff[5]=data_length&0x00ff;
    crc16=crc_algorithm(buff);
    crc16_high=crc16>>8;
    buff[7]=crc16_high;
    crc16_low=crc16&0x00ff;
    buff[6]=crc16_low;

    if(!write(fd, &buff, 8))
    {
//        close(fd);
        return -1;
    }
    memset(rx, 0, 10);
    if (read(fd, &rx, 10) > 0)
    {
        data_high=rx[3];
        data_low=rx[4];
        if((rx[3]==buff[3])&&(rx[4]==buff[4]))
            temp=1;
        else
            temp=0;
    }
    else
    {
//        close(fd);
        return -2;
    }
//    close(fd);
    return temp;

}





//void serial_init(int fd)
//{
//	struct termios options;
//	tcgetattr(fd, &options);
//	options.c_cflag |= ( CLOCAL | CREAD );
//	options.c_cflag &= ~CSIZE;
//	options.c_cflag &= ~CRTSCTS;
//	options.c_cflag |= CS8;
//	options.c_cflag &= ~CSTOPB;
//	options.c_iflag |= IGNPAR;
//	options.c_iflag &= ~(ICRNL | IXON);
//	options.c_oflag = 0;
//	options.c_lflag = 0;

//	cfsetispeed(&options, B9600);
//	cfsetospeed(&options, B9600);
//	tcsetattr(fd,TCSANOW,&options);
//}
