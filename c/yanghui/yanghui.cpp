// yanghui.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"stdio.h"
void line1(int);
int c(int,int);
int jie(int);
main()
{
	int n;
	printf("        1\n");
	for(n=2;n<=8;n++)
	{   
		line1(n);
		printf("\n");
	}
}
void line1(int n)
{   
	int i,m;
	for(i=1;i<=8-n;i++)
	{
	printf(" ");
	}
	for(m=0;m<=n;m++)
	{
    printf("%d ",c(m,n));
	
	}
}
int c(int n,int m)
{
	return jie(m)/(jie(m-n)*jie(n));
}
int jie(int k)
{
	int i,p;
	p=1;
	for(i=1;i<=k;i++)
		p=p*i;
	return p;
}

