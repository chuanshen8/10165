
#include "data_global.h"
#include "uart_cache.h"

//条件变量
pthread_cond_t cond_zigbee_rcv;
pthread_cond_t cond_uart_cmd;
pthread_cond_t cond_main_thread;
pthread_cond_t cond_camera;
pthread_cond_t cond_refresh;
pthread_cond_t cond_refresh_updata;

//互斥锁
pthread_mutex_t mutex_slinklist;
pthread_mutex_t mutex_zigbee_rcv;
pthread_mutex_t mutex_uart_cmd;
pthread_mutex_t mutex_main_thread;
pthread_mutex_t mutex_camera;
pthread_mutex_t mutex_refresh;
pthread_mutex_t mutex_refresh_updata;
pthread_mutex_t mutex_global;   //对应all_info_RT
pthread_mutex_t mutex_linklist;

unsigned char dev_camera_mask;
unsigned char dev_uart_mask;

uart_cache_list zigbee_cache_head, zigbee_cache_tail;

int dev_camera_fd;
int dev_uart_fd;   //"ttyUSB0"
int sg_fd;

int msgid; //消息队列
int shmid; //共享内存
int semid; //信号量


/**** sqlite module ****/
int storageNum;

struct env_info_array all_info_RT; //用于对应共享内存中数据

void sendMsgQueue (long type, unsigned char text)
{
    struct msg msgbuf;
    msgbuf.type = 1L;
    msgbuf.msgtype = type;
    msgbuf.text[0] = text;
    msgsnd (msgid, &msgbuf, sizeof (msgbuf) - sizeof (long), 0);
}
void serial_init(int fd)
{
    struct termios options;
    tcgetattr(fd, &options);
    options.c_cflag |= ( CLOCAL | CREAD );
    options.c_cflag &= ~CSIZE;
    options.c_cflag &= ~CRTSCTS;
    options.c_cflag |= CS8;
    options.c_cflag &= ~CSTOPB;
    options.c_iflag |= IGNPAR;
    options.c_iflag &= ~(ICRNL | IXON);
    options.c_oflag = 0;
    options.c_lflag = 0;

    cfsetispeed(&options, B115200);
    cfsetospeed(&options, B115200);
    tcsetattr(fd,TCSANOW,&options);
}

void serial_init1(int fd)
{
    struct termios options;
    tcgetattr(fd, &options);
    options.c_cflag |= ( CLOCAL | CREAD );
    options.c_cflag &= ~CSIZE;
    options.c_cflag &= ~CRTSCTS;
    options.c_cflag |= CS8;
    options.c_cflag &= ~CSTOPB;
    options.c_iflag |= IGNPAR;
    options.c_iflag &= ~(ICRNL | IXON);
    options.c_oflag = 0;
    options.c_lflag = 0;

    cfsetispeed(&options, B9600);
    cfsetospeed(&options, B9600);
    tcsetattr(fd,TCSANOW,&options);
}

