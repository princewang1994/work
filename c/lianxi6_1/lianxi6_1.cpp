// lianxi6_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"stdio.h"
main()
{
	int i,a[11],r;
	for(i=1;i<=10;i++)
		scanf("%d",&a[i]);
	for(i=1;i<=9;i++)
	{	
		if(a[i]==0)
		{
           r=a[i];
		   a[i]=a[i+1];
		   a[i+1]=r;
		}
	}
	for(i=1;i<=10;i++)
		printf("%3d",a[i]);
}
