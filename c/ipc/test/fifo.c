#include <unistd.h>
#include<netinet/in.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include<sys/types.h>
#include<sys/socket.h>
#include<sys/un.h>

int fd[2];
void do_write(int in,int out)
{
	//child
	int b[1024];
	int len;
	long total=0;
	while((len=read(in,b,1024)) > 0)
	{
		clock_t start,end;

		start=clock();

		write(out, b,len);	

		end=clock();

		total+=end-start;
	}

	printf("%d ",total);
	close(in);
	close(out);
	
}
void do_read(int in,int out)
{
	int buffer[1024];
	int len;
	long total=0;
	//parent
	while(1)
	{
		len=read(in,buffer,1024);

		clock_t start,end;
		start=clock();

		write(out,buffer,len);

		end=clock();

		total+=end-start;

		if(len<1024)
		{
			break;
		}
	}	
	printf(" %d\n",total);
	close(out);
	close(in);
	
}


//pipe test

void  pipe_init()
{
	int pipefd[2];
	if(pipe(pipefd)==0)
	{
		fd[0]=pipefd[0];
		fd[1]=pipefd[1];
	}
	
}
void get_pipe_out(int *out)
{
	*out=fd[1];
}
void get_pipe_in(int *in)
{
	*in=fd[0];
}




//fifo test

void fifo_init(int fd[2])
{

}

int open_fifo(int write)
{
	char *fifo_name="/tmp/my_fifo";
	if(access(fifo_name,F_OK)==-1)
	{
		int res=mkfifo(fifo_name,0777);
		if(res!=0)
		{
			printf("write%d\n",write);
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
void get_fifo_out(int *out)
{
	*out=open_fifo(1);
}
void get_fifo_in(int *in)
{
	*in=open_fifo(0);
}




//socket test
void sock_init()
{

}
void get_sock_out(int * out)
{
	//varible definition
	int sockfd;
	int len;
	struct sockaddr_un address;

	//name socket
	sockfd=socket(AF_UNIX,SOCK_STREAM,0);
	address.sun_family=AF_UNIX;
	strcpy(address.sun_path,"server_socket");
	len=sizeof(address);
	connect(sockfd,(struct sockaddr *)&address,len);
	*out=sockfd;
		
}
void get_sock_in(int *in)
{
	//varible definition
	int client_sockfd;
	int server_sockfd;
	int client_len;
	int result;

	struct sockaddr_un client_address;
	struct sockaddr_un server_address;
	//
	//name socket
	unlink("server_socket");
	server_sockfd=socket(AF_UNIX,SOCK_STREAM,0);
	server_address.sun_family=AF_UNIX;
	strcpy(server_address.sun_path,"server_socket");
	result = bind(server_sockfd,(struct sockaddr *)&server_address,sizeof(server_address));
	if(result==-1)
	{
		perror("oops: server1");
		exit(1);
	}		

	listen(server_sockfd,1);
	client_len = sizeof(client_address);
	client_sockfd=accept(server_sockfd,(struct sockaddr *)&client_address,&client_len);		
	
	close(server_sockfd);
	*in=client_sockfd;
}


void inet_init(int fd[2])
{

}
void get_inet_out(int *out)
{
	int sockfd;
	int len;
	struct sockaddr_in address;
	//
	//name socket
	sockfd=socket(AF_INET,SOCK_STREAM,0);
	address.sin_family=AF_INET;
	address.sin_port=9734;
	address.sin_addr.s_addr=inet_addr("127.0.0.1");
	connect(sockfd,(struct sockaddr *)&address,sizeof(address));
	*out=sockfd;
}
void get_inet_in(int *in)
{
	//varible definition
	int client_sockfd;
	int server_sockfd;
	int client_len;
	int result;

	struct sockaddr_in client_address;
	struct sockaddr_in server_address;

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
	client_len = sizeof(client_address);
	client_sockfd=accept(server_sockfd,(struct sockaddr *)&client_address,&client_len);		
	*in=client_sockfd;
	
}
int main(int argc,char *arg[])
{


	int fd[2];

//	pipe_init(fd);	
	fifo_init(fd);
//	sock_init(fd);
//	inet_init(fd);



//	printf("%d,%d\n",fd[0],fd[1]);
	//fork write
	pid_t pid=fork();

	int status;
	if(pid==0)
	{
		//open a file
		int in=open(arg[1],O_RDONLY);	
		int test_out_fd;
	//	get_pipe_out(&test_out_fd);
		get_fifo_out(&test_out_fd);
	//	get_sock_out(&test_out_fd);
	//	get_inet_out(&test_out_fd);
		
		do_write(in,test_out_fd);
	}
	else
	{
		int out=open("test.out",O_WRONLY|O_CREAT,S_IRUSR|S_IWUSR);
		int test_in_fd;
	//	get_pipe_in(&test_in_fd);
		get_fifo_in(&test_in_fd);
	//	get_sock_in(&test_in_fd);
	//	get_inet_in(&test_in_fd);
		do_read(test_in_fd,out);		
		waitpid( pid, &status, 0 );
	}


	exit(EXIT_SUCCESS); 
}
