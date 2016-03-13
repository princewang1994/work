// lianxi7_22.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
void swap(int *a,int *b);
main()
{
	int num[4][4],*p,i,j;
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
			scanf("%d",&num[i][j]);
	for(i=0;i<4;i++)
		for(j=i;j<4;j++)
            swap(&num[i][j],&num[j][i]);
    for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
            printf("%d ",num[i][j]);
		printf("\n");
	}
}
void swap(int *a,int *b)
{
	int r;
	r=*a;
	*a=*b;
	*b=r;
}