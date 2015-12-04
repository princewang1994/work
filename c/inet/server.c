#include<sys/types.h>
#include<sys/socket.h>
#include<stdio.h>
#include<sys/un.h>
#include<netinet/in.h>
#include<unistd.h>
#include<stdlib.h>
#define PI 3.1415926
int main(int argc, char * agrv[])
{
	//varible definition
	int client_sockfd;
	int server_sockfd;
	int client_len;

	int result;
	struct sockaddr_in client_address;
	struct sockaddr_in server_address;
	double area=0;
	//
	//name socket
	server_sockfd=socket(AF_INET,SOCK_STREAM,0);
	server_address.sin_family=AF_INET;
	server_address.sin_addr.s_addr=inet_addr("127.0.0.1");
	server_address.sin_port=9734;
	result = bind(server_sockfd,(struct sockaddr *)&server_address,sizeof(server_address));
	if(result==-1)
	{
		perror("oops: server1");
		exit(1);
	}		
	listen(server_sockfd,5);
	while(1)
	{
		double r;
		client_len = sizeof(client_address);
		client_sockfd=accept(server_sockfd,(struct sockaddr *)&client_address,&client_len);		
		read(client_sockfd,&r,sizeof(double));
		printf("from client:r=%f\n",r);	
		area=PI*r*r;
		printf("area=%f\n",area);
		write(client_sockfd,&area,sizeof(double));
		close(client_sockfd);
	}
	exit(0);
}
