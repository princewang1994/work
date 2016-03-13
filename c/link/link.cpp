// link.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
int *f(int a[])
{
	int b[10];
	int i,j=0;
	for(i=0;i<5;i++)
	{
		b[j++]=a[i];
		b[j++]=a[i];
	}
	return b;
}
main()
{
	int a[5]={1,4,3,6,7},n,*c;
	c=f(a);
	for(n=0;n<10;n++)
	{
		printf("%d ",*(c+n));
	}
}