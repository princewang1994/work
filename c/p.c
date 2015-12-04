#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct
{
	int type;
	int len;
	char content[255];
} msg;

int main(int argc,char *arg[])
{

	printf("begin\n");
	int p_to_f[2];
	int f_to_p[2];
	char buffer_w[BUFSIZ+1];
	char buffer_r[BUFSIZ+1];
	int len=0;
	pid_t fork_result;

	if(pipe(p_to_f)==0 && pipe(f_to_p==0))
	{
		fork_result=fork();
		if(fork_result==-1)
		{
			printf("fork failed");
			exit(EXIT_FAILURE);
		}
		if(fork_result==0)
		{
//			close(f_to_p[0]);
			{

				memset(buffer_w,0,sizeof(buffer_w));
				printf("to p:>");
				scanf("%s",buffer_w);
				write(f_to_p[1],buffer_w,strlen(buffer_w));
				printf("fork write:%s\n",buffer_w);
			}
			exit(EXIT_SUCCESS);
		}
		else
		{
			//close(p_to_f[0]);
			//parent
			{
				memset(buffer_r,0,sizeof(buffer_r));
				read(f_to_p[0],buffer_r,BUFSIZ);
				printf("parent read:%s\n",buffer_r);
			}
			exit(EXIT_SUCCESS);
		}
	}
	exit(EXIT_SUCCESS);
}
