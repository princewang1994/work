#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <netinet/in.h>
#include <sys/time.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	int server_sockfd, client_sockfd;
	int server_len, client_len;
	struct sockaddr_in server_address;
	struct sockaddr_in client_address;
	int result;
	fd_set readfds, testfds;
	char buffer[128];
	server_sockfd = socket(AF_INET, SOCK_STREAM, 0);
	server_address.sin_family = AF_INET;
	//server_address.sin_addr.s_addr = htonl(INADDR_ANY);
	server_address.sin_addr.s_addr = inet_addr("127.0.0.1");
	//server_address.sin_port = htons(9734);
	server_address.sin_port = 9734;
	server_len = sizeof(server_address);
	bind(server_sockfd, (struct sockaddr *)&server_address, server_len);

	listen(server_sockfd, 5);
	FD_ZERO(&readfds);
	FD_SET(server_sockfd, &readfds);

	while(1)
	{
		int fd;
		int nread;
		testfds = readfds;
		
		printf("server waiting\n");
		result = select(FD_SETSIZE, &testfds, (fd_set *)0, (fd_set *)0, (struct timeval *) 0);
		printf("result=%d\n",result);
		if(result < 1)
		{
			perror("server");
			exit(1);
		}
		for(fd = 0; fd < FD_SETSIZE; fd++)
		{
			if(FD_ISSET(fd,&testfds))
			{
				if(fd == server_sockfd)
				{
					client_len = sizeof(client_address);
					client_sockfd = accept(server_sockfd,(struct sockaddr *)&client_address, &client_len);
					FD_SET(client_sockfd, &readfds);
					printf("adding client on fd %d\n",client_sockfd);
				}
				else
				{
				//	ioctl(fd, FIONREAD, &nread);
				//	if(nread == 0)
				//	{
				//		close(fd);
				//		FD_CLR(fd, &readfds);
				//		printf("removing\n");
				//	}
				//	else
				//	{
						ioctl(fd,FIONREAD,&nread);
						read(fd,buffer,nread);

						buffer[nread]=0;
						printf("serving client on fd %d\n",fd);
						printf("string from client:%s\n",buffer);
						int i;
						for(i=4;i<10;i++)
						{
							printf("write %d ",i);
							write(i,buffer,nread);
						}		//if(FD_ISSET(i,&testfds))
							//{	
							//printf("fd : %d\n",i);
					
							//}
				//	}
				}
			}
		}
	}
}
