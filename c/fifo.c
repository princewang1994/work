
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>

#define QUIT -1
#define INPUT 1
#define OUTPUT 2
#define FIFO_P_F "/tmp/p_to_f_fifo"
#define FIFO_F_P "/tmp/f_to_p_fifo"

typedef struct
{
	int type;
	int len;
	char content[255];		
} msg;
//get msg from keyboard
msg get_input(int parent)
{
	sleep(1);
	msg m;
	if(parent)
	{
		printf("parent ");
	}
	else
	{
		printf("fork ");
	}
	printf("input msg(when type == -1 quit this session):>\n");
	printf("type:>");
	scanf("%d",&m.type);
	if(m.type==QUIT)
	{
		strcpy(m.content,"quit");
		return m;
	}
	printf("content:>");
	scanf("%s",m.content);
	m.len=strlen(m.content);
	return m;
}
//write msg to pipe
void send_msg(int fd,msg m)
{
	write(fd,&m,sizeof(msg));
}
//read msg from pipe
void read_msg(int fd,msg *m)
{
	read(fd,m,sizeof(msg));
}
//show the msg
void show_msg(int parent,msg m)
{
	if(m.type==QUIT)
	{
		printf("session has finished !\n");
		return;
	}
	if(parent)
	{
		printf("parent ");
	}
	else
	{
		printf("fork ");
	}
	printf("receive msg:\n");
	printf("type:%d\n",m.type);
	printf("len:%d\n",m.len);
	printf("content:%s\n",m.content);
}

int open_fifo(int write,const char * fifo_name)
{
	if(access(fifo_name,F_OK)==-1)
	{
		int res=mkfifo(fifo_name,0777);
		if(res!=0)
		{
			printf("error");
			exit(EXIT_FAILURE);
		}
	}
	int open_mode;
	if(write)
	{
		open_mode=O_WRONLY;
	}
	else
	{
		open_mode=O_RDONLY;
	}
	
	int fd=open(fifo_name,open_mode);
	return fd;
}

int main(int argc,char *arg[])
{
	int len=0;
	//open 2 pipes
	pid_t pid;
	pid=fork();//fork sub progress
	if(pid==-1)
	{
		printf("fork failed");
		exit(EXIT_FAILURE);
	}


	if(pid==0)
	{
		int fd_write=open_fifo(1,FIFO_F_P);
		int fd_read=open_fifo(0,FIFO_P_F);
		msg m;
		msg snd;
		m.type=0;
		while(1)
		{
			read_msg(fd_read,&m);
			show_msg(0,m);
			if(m.type==QUIT)
			{	
				break;
			}
			snd=get_input(0);
			send_msg(fd_write,snd);
			if(snd.type==QUIT)
			{
				break;
			}
			sleep(1);
		}
		exit(EXIT_SUCCESS);
	}
	else
	{
		int fd_read=open_fifo(0,FIFO_F_P);
		int fd_write=open_fifo(1,FIFO_P_F);
		//parent
		msg m;
		msg rcv;
		do	
		{
			m=get_input(1);
			send_msg(fd_write,m);
			if(m.type==QUIT)
			{
				break;
			}
			read_msg(fd_read,&rcv);
			show_msg(1,rcv);
		}while(rcv.type!=QUIT);
		exit(EXIT_SUCCESS);
	}
	exit(EXIT_SUCCESS); 
}

