// lianxi7_25.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "string.h"
main()
{
	char name[10][20],r[20];
	int i,k,n;
	bool flag;
	for(i=0;i<5;i++)
		scanf("%s",name[i]);
	printf("ɾ������");
    while(n!=-1)//����-1��ɾ������
	{
		scanf("%d",&n);
		name[n][0]='\0';
	}
	printf("�������");
	do
	{
		scanf("%s",r);
        if(strcmp(r,"-1")==0)//����-1����ӽ���
			break;
		strcpy(name[i++],r);
	}while(0==0);
    flag=true;
	while(flag)
	{
		flag=false;
		for(k=0;k<i-2;k++)
			if(strcmp(name[k],name[k+1])>=0)
			{
				strcpy(r,name[k]);
				strcpy(name[k],name[k+1]);
				strcpy(name[k+1],r);
				flag=true;
			}
	}
	for(k=0;k<i;k++)
		printf("%s\n",name[k]);

}