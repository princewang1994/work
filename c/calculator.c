#include<stdio.h>

#include<unistd.h>

int cal(int a,int b,char opt)
{	
	switch(opt)
	{
	case 'a':return a+b;
	case 's':return a-b;
	case 'm':return a*b;
	case 'd':return a/b;
	}
}
int getInt(char * str)
{
	int s=0;
	int i=0;
	while(str[i]!=0)
	{
		s*=10;
		s+=(str[i++]-'0');	
	}
	return s;
}
int main(int argc,char *arg[])
{

	int result;
	
	int a,b;
	
	char opt;
	int u,v;

	char *vtr;	
	char *utr;
	char o='a';

	while((opt=getopt(argc,arg,"asmdu:v:"))!=-1)
	{
		switch(opt)
		{
		case 'a':
			o='a';
			break;
		case 's':
			o='s';
			break;
		case 'm':
			o='m';
			break;
		case 'd':
			o='d';
			break;
		case 'u':
			utr=optarg;	
			break;
		case 'v':
			vtr=optarg;
			break;
		case ':':
			printf("please input arg");
			break;
		case '?':
			printf("option not found");
			break;
		default : printf("option error");
		}
	}
	v=getInt(vtr);
	u=getInt(utr);
	printf("%d\n",cal(u,v,o));

	return 0;
}
