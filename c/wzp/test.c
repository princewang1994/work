#include<unistd.h>
#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	char  buffer[256];
	int len=read(0,buffer,256);

	buffer[len-1]=0;
	printf("str=%s",buffer);
	printf("read len:%d",len);
	exit(0);
}
