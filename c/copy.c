#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>



/**
* copy -s [FILE] -d [FILE] [-i][-f]
* -i :	if destination file have existed, show info to comfirm
* -f :  force to execute copy
* by : prince
*/





//execute copy
int copy(const char *src,const char * dst,int i, int f)
{
	FILE * in=0;
	FILE * out=0;
	printf("s=%s,d=%s\n",src,dst);
	if(f==0)
	{
		FILE * f=0;
		if(i==1 && (f=fopen(dst,"r"))>0) 
		{	
			printf("%s exist, sure to overwrite ? y/n>",dst);
			char y;
			scanf("%c",&y);
			if(y!='y')
			{
				return 0;
			}
			fclose(f);	
		}	
	}
	in=fopen(src,"r");
	out=fopen(dst,"w");
	if(in == NULL || out==NULL)
	{
		printf("file path invaild !\n");
		return 0;
	}
	char buffer[1024];

	printf("coping...\n");
	while(fread(buffer,sizeof(int),1,in)==1)
	{
		fwrite(buffer,sizeof(int),1,out);
	}
	fclose(in);
	fclose(out);
	printf("copy finished\n");
	return 1;
}
int main(int argc, char * arg[])
{
	char opt;
	//source file path
	const char * src=0;
	//destination file path
	const char * dst=0;
	//info flag
	int i=0;
	//force flog
	int f=0;
	while((opt=getopt(argc,arg,"s:d:if"))!=-1)
	{
		switch(opt)
		{
		case 's':
			src=optarg;	
			break;
		case 'd':
			dst=optarg;
			break;
		case 'i' :
			i=1;
			break;
		case 'f' :
			f=1;
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
	if(opendir(src)!=NULL)
	{
		printf("%s is a dir !\n",src);
		exit(0);
	}	
	else
	{
		copy(src,dst,i,f);	
	}
	exit(0);
}
