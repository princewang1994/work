// lianxi6_16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"stdio.h"
int a[21][21],i,n;
void up(int);
void up2(void);
main()
{   
	int j;
	printf("input n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			a[i][j]=0;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
	    	scanf("%d",&a[i][j]);
	}
	for(i=1;i<=n;i++)
		up(i); 

	up2();
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
	    	printf("%d ",a[i][j]);
		printf("\n");
	}
}
void up(int i)
{
	bool flag;
	int k,r,j;
	flag=true;
	while(flag)
	{
		flag=false;
		for(k=1;k<=n-1;k++)
		{
			if(a[i][k]>=a[i][k+1])
			{
				r=a[i][k];
				a[i][k]=a[i][k+1];
				a[i][k+1]=r;
				for(j=2;j<=n;j++)
				{
					r=a[k][j];
					a[k][j]=a[k+1][j];
					a[k+1][j]=r;
				}
				flag=true;	
			}
		}
	}
}
void up2(void)
{
	bool flag;
	int k,r;
	flag=true;
	while(flag)
	{
		flag=false;
		for(k=1;k<=n-1;k++)
		{
			if(a[k][1]>a[k+1][1])
			{
				r=a[k][1];
                a[k][1]=a[k+1][1];
                a[k+1][1]=r;		
				flag=true;	
			}
		}
	}
}
