// lianxi6_27.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"stdio.h"
#include"string.h"
main()
{
	char name[5][20],r[20];
    int i;
	bool flag;
	for(i=0;i<5;i++)
		scanf("%s",name[i]);
	flag=true;
	while(flag)
	{
		flag=false;
		for(i=0;i<5;i++)
			if(strcmp(name[i],name[i+1])==1)
			{
                strcpy(r,name[i]);
				strcpy(name[i],name[i+1]);
				strcpy(name[i+1],r);
				flag=true;
			}
	}
	printf("\n");
    for(i=0;i<5;i++)
		printf("%s\n",name[i]);
}
