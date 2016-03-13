// lianxi6_27.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"stdio.h"
#include"string.h"
main()
{
	int i;
	char name[4][20],r[20];
	bool flag;
	for(i=0;i<4;i++)
		scanf("%s",name[i]);
	flag=true;
	while(flag)
	{
		flag=false;
		for(i=0;i<4;i++)
			if(strcmp(name[i],name[i+1])<0)
			{
				strcpy(r,name[i]);
				strcpy(name[i],name[i+1]);
				strcpy(name[i+1],r);
				flag=true;
			}
	}
	for(i=3;i>=0;i--)
		printf("%s\n",name[i]);
}