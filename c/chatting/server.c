#include<sys/types.h>
#include<sys/socket.h>
#include<stdio.h>
#include<sys/un.h>
#include<netinet/in.h>
#include<sys/ioctl.h>
#include<unistd.h>
#include<stdlib.h>
#include"msg.h"

void serve(int fd,int * fds, int fd_count,fd_set readfds)
{
	massage msg;
	read(fd,&msg,sizeof(massage));

	printf("nickname: %s\n",msg.nickname);
	printf("from client:%s\n",msg.words);	

	massage sys;
	strcpy(sys.nickname,"system");
	strcpy(sys.words,"session has overed, please input 'q' to quit");
	
	int i;
	if(strcmp(msg.words,"q")!=0)
	{
		for(i=1; i<fd_count ; i++)
		{
			write(fds[i],&msg,sizeof(msg));
		}
	}
	else
	{
		for(i=1; i<fd_count ; i++)
		{
			if(fds[i]!=fd)
				write(fds[i],&sys,sizeof(sys));
			write(fds[i],&msg,sizeof(msg));
		}
		FD_CLR(fd,&readfds);
		close(fd);
	}
		
}
int main(int argc, char * agrv[])
{
	//varible definition
	int server_sockfd;

	int result;
	struct sockaddr_in client_address;
	struct sockaddr_in server_address;
	
	fd_set readfds,testfds;

	//
	//name server socket
	server_sockfd=socket(AF_INET,SOCK_STREAM,0);
	server_address.sin_family=AF_INET;
	server_address.sin_addr.s_addr=inet_addr("127.0.0.1");
	server_address.sin_port=9734;
	result = bind(server_sockfd,(struct sockaddr *)&server_address,sizeof(server_address));

	if(result==-1)
	{
		perror("server error");
		exit(1);
	}		

	listen(server_sockfd,5);
	
	FD_ZERO(&readfds);
	FD_SET(server_sockfd,&readfds);
	
	//all fds	
	int fds[256];	
	int fd_count=1;	
	fds[0]=server_sockfd;
	printf("serverfd=%d\n",server_sockfd);

	while(1)
	{
		printf("server waiting...\n");
		testfds=readfds;

		int result=select(FD_SETSIZE,&testfds,(fd_set *)NULL,(fd_set *)NULL,(struct timeval *)NULL);
		
		printf("select success!");
			
		if(result<0)
		{
			perror("select");
			exit(1);
		}
		int i;
		for(i = 0; i < fd_count ; i++)
		{
			int fd=fds[i];
			if(FD_ISSET(fd,&testfds))
			{
				printf("fd %d is readable:\n",fd);
				if(fd==server_sockfd)
				{
					int client_len = sizeof(client_address);
					int client_sockfd=accept(server_sockfd,(struct sockaddr *)&client_address,&client_len);	
					printf("connect fd=%d\n",client_sockfd);
					FD_SET(client_sockfd,&readfds);
					//add new fd
					fds[fd_count++]=client_sockfd;
					printf("new client connect\n");
				}
				else
				{
					printf("serving fd %d \n",fd);
					int t=0;
					for(; t<fd_count ;t++)
					{
						printf("%d ",fds[t]);
					}
					printf("\n");
					serve(fd,fds,fd_count,testfds);		
					printf("client get msg:%d\n",fd);	
				}	
				printf("...............\n");
			}
		}	 	
	}                	
	exit(0);         	
}                        	
