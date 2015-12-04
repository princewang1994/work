#include<sys/types.h>
#include<sys/socket.h>
#include<stdio.h>
#include<sys/un.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc , char * argv[])
{
	//varible definition
	int sockfd;
	int len;
	struct sockaddr_un address;
	int result;
	double r=3;
	double area=0;
	//
	//name socket
	sockfd=socket(AF_UNIX,SOCK_STREAM,0);
	address.sun_family=AF_UNIX;
	strcpy(address.sun_path,"server_soket");
	len=sizeof(address);
	result = connect(sockfd,(struct sockaddr *)&address,len);
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
