#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QUIT -1
#define INPUT 1
#define OUTPUT 2

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

int main(int argc,char *arg[])
{
	int p_to_f[2];//pipe from parent to fork
	int f_to_p[2];//pipe from fork to parent
	int len=0;
	pid_t fork_result;
	//open 2 pipes
	if(pipe(p_to_f)==0 && pipe(f_to_p)==0)
	{
		fork_result=fork();//fork sub progress
		if(fork_result==-1)
		{
			printf("fork failed");
			exit(EXIT_FAILURE);
		}
		if(fork_result==0)
		{
			close(f_to_p[0]);
			close(p_to_f[1]);
			msg m;
			msg snd;
			m.type=0;
			while(1)
			{
				read_msg(p_to_f[0],&m);
				show_msg(0,m);
				if(m.type==QUIT)
				{	
					break;
				}
				snd=get_input(0);
				send_msg(f_to_p[1],snd);
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
			close(p_to_f[0]);
			close(f_to_p[1]);
			//parent
			msg m;
			msg rcv;
			do	
			{
				m=get_input(1);
				send_msg(p_to_f[1],m);
				if(m.type==QUIT)
				{
					break;
				}
				read_msg(f_to_p[0],&rcv);
				show_msg(1,rcv);
			}while(rcv.type!=QUIT);
			exit(EXIT_SUCCESS);
		}
	}	
	exit(EXIT_SUCCESS); 
}
