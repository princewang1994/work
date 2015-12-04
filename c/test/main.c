#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

#include"op.h"

int main(int argc , char *agrv[])
{	
	char a[]="aaaabbbbcccc";
	char *b =a;
	
	int in=open("test",O_RDONLY);
	int out=open("out",O_WRONLY|O_CREAT);
	int len;
	char buffer[1024];

	while((len=read(in,buffer,sizeof(buffer)))>0)
	{
		printf("%d\n",len);
		write(out,buffer,len);
	}	
	close(in);
	close(out);	
	return 0;
}
