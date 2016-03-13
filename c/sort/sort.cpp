// sort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
void sort(int n,int a[]);
main()
{
	 int n,i,a[10]={4,6,7,3,4,5,6,1,2,8};
	 sort(9,a);
	 for(i=0;i<10;i++)
		 printf("%d",a[i]);
}
void sort(int n,int a[])
{
	int i,r,k;
	if(n==0)
		return;
	else
	{
		sort(n-1,a);
		for(i=0;(a[n]<a[i])||(a[n]>a[i+1]);i++);
        r=a[n];
		for(k=n-1;k>=i+1;k--)
		   a[k+1]=a[k];
        a[i+1]=r;
	}
}