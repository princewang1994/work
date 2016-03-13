// lianxi6_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"stdio.h"
bool prime(int);
main()
{
	int i,a[101],k;
	for(i=1;i<=100;i++)
		a[i]=0;
	k=1;
	for(i=2;i<=100;i++)
	{
		if(prime(i))
		{
			a[k]=i;
		    k++;
		}
	}
	for(i=1;i<=100;i++)
		if(a[i]!=0)
		printf("%3d",a[i]);
	printf("\n");
}
bool prime(int i)
{
	int n;
	for(n=2;n<=i/2;n++)
	{
		if(i%n==0)
           return false;
	}
	return true;
}