#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <netinet/in.h> 
#include <arpa/inet.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <string.h>
int main()
{
	int sockfd;
	int len;
	struct sockaddr_in address;
	int result;
	int result1;
	//char ch;

	sockfd = socket(AF_INET,SOCK_STREAM,0);
	address.sin_family=AF_INET;
	address.sin_addr.s_addr=inet_addr("127.0.0.1");
	//address.sin_port=htons(9734);
	address.sin_port=9734;
	len=sizeof(address);
	result=connect(sockfd,(struct sockaddr *)&address, len);

	fd_set readfds, testfds;

	FD_ZERO(&readfds);
	FD_SET(sockfd, &readfds);
	FD_SET(0, &readfds);

	if(result==-1)
	{
		perror("oops: client");
		exit(1);
	}

	while(1)
	{
		int nread;
		struct timeval tv;

		tv.tv_sec=0;
		tv.tv_usec=50000;
		testfds = readfds;
		printf("select\n");
		result1 = select(FD_SETSIZE, &testfds, (fd_set *)0, (fd_set *)0, (struct timeval *) 0);
		printf("result1 %d\n",result1);
		switch(result1)
		{
			case -1:
				perror("select");
				exit(1);
			default:
				if(FD_ISSET(sockfd,&testfds))
				{	
					printf("hehe");
					ioctl(sockfd,FIONREAD,&nread);
					char buffer[256];
					read(sockfd,buffer,nread);
					buffer[nread]=0;
					printf("string from server to client %d = %s\n",sockfd,buffer);	
					
					//write(1,word,sizeof(word));
				}else if(FD_ISSET(0,&testfds))
				{
					//ioctl(fd,FIONREAD,&nread);
					char buffer[256];
					int len=read(0,buffer,sizeof(buffer));
					buffer[len-1]=0;//quite important!	
					write(sockfd,buffer,strlen(buffer));
					//read(sockfd,buffer,nread);
					//printf("string from server to client  %s\n",buffer);	
					if(!strcmp(buffer,"q")) 
					{
						close(sockfd);
						exit(0);
					}
				}
		};
	}	
	close(sockfd);
	exit(0);
}
