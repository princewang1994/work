#include<sys/types.h>
#include<sys/socket.h>
#include<stdio.h>
#include<sys/un.h>
#include<netinet/in.h>
#include<sys/ioctl.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include"msg.h"

char nickname[256];
void get_from_server(int fd)
{
	massage msg;
	while(1)
	{
		read(fd, &msg, sizeof(msg));
		if(strcmp(msg.words,"q")==0)
		{
			close(fd);
			exit(0);
		}
		show_msg(msg);
	}
}
int main(int argc , char * argv[])
{

	//varible definition
	int sockfd;
	struct sockaddr_in address;
	int result;
	
	printf("input your nickname:>");
	scanf("%s",nickname);
	//
	//name client socket
	sockfd=socket(AF_INET,SOCK_STREAM,0);
	address.sin_family=AF_INET;
	address.sin_port=9734;
	address.sin_addr.s_addr=inet_addr("127.0.0.1");
	result = connect(sockfd,(struct sockaddr *)&address,sizeof(address));

	printf("conncet successfully!\n");
	if(result==-1)
	{
		perror("connect");
		exit(1);
	}		
	if(fork()==0)
		get_from_server(sockfd);
	else
	{
		do
		{
			massage msg=get_msg(nickname);
			send_msg(msg,sockfd);
			if(strcmp(msg.words,"q")==0)
			{
				printf("session has overed\n");
				break;	
			}

		}while(1);	
	}	
	close(sockfd);	
	exit(0);
}
