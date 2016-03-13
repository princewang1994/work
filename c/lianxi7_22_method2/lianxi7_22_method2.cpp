// lianxi7_22_method2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
main()
{
	int num[4][4],*p,i,j;
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
			scanf("%d",&num[i][j]);
	for(j=0;j<4;j++)
	{
		for(i=0;i<4;i++)
			printf("%d ",num[i][j]);
	    printf("\n");
	}
}