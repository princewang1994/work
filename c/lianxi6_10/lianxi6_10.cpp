// lianxi6_10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
void trans(int);
int n,a[21][21];
main()
{
	int i,j;
	printf("�������n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
	        scanf("%d",&a[i][j]);
    for(i=1;i<=n;i++)
		trans(i);
	printf("a��ת�þ���Ϊ\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
}
void trans(int i)
{   
	int k,r;
    for(k=i+1;k<=n;k++)
	{
		r=a[i][k];
	    a[i][k]=a[k][i];
		a[k][i]=r;
	}
}
