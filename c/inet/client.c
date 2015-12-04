#include<sys/types.h>
#include<sys/socket.h>
#include<stdio.h>
#include<sys/un.h>
#include<netinet/in.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc , char * argv[])
{
	//varible definition
	int sockfd;
	int len;
	struct sockaddr_in address;
	int result;
	double r=3;
	double area=0;
	//
	//name socket
	sockfd=socket(AF_INET,SOCK_STREAM,0);
	address.sin_family=AF_INET;
	address.sin_port=9734;
	address.sin_addr.s_addr=inet_addr("127.0.0.1");
	result = connect(sockfd,(struct sockaddr *)&address,sizeof(address));
	if(result==-1)
	{
		perror("oops: client1");
		exit(1);
	}		
	
	write(sockfd,&r,sizeof(double));
	read(sockfd,&area,sizeof(double));
	printf("area from server = %f\n",area);
	close(sockfd);
	exit(0);
}
