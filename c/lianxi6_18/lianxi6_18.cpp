// lianxi6_18.cpp : Defines the entry point for the console application.
//输入数组，原数组不动，显示排名，关键：双行列表，带着标号一起排序

#include "stdafx.h"
#include"stdio.h"
main()
{
	int a[3][5]={{1,2,3,4,5},{},{1,2,3,4,5}},i,r;
	bool flag;
	for(i=0;i<5;i++)
		scanf("%d",&a[1][i]);
	flag=true;
	while(flag)
	{
	  flag=false;
      for(i=0;i<4;i++)
		  if(a[1][i]>a[1][i+1])
		  {
			  r=a[1][i];
			  a[1][i]=a[1][i+1];
			  a[1][i+1]=r;			 
			  r=a[0][i];
			  a[0][i]=a[0][i+1];
			  a[0][i+1]=r;
			  flag=true;
		  }
	}
	flag=true;
	while(flag)
	{
	  flag=false;
      for(i=0;i<4;i++)
		  if(a[0][i]>a[0][i+1])
		  {
			  r=a[0][i];
			  a[0][i]=a[0][i+1];
			  a[0][i+1]=r;			 
			  r=a[2][i];
			  a[2][i]=a[2][i+1];
			  a[2][i+1]=r;
			  flag=true;
		  }
	}

	for(i=0;i<5;i++)
		printf("%2d",a[2][i]);
} 