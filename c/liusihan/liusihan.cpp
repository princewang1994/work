// text63.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#define M 100
main()
{
	int k,i,j,a[M];
	bool flag;
	k=0;
	for(i=2;i<10000;i++)
	{
		flag=true;
		for(j=i/2;j>=2;j--)
			if(i%j==0)
			{
				  flag=false;
				  j=1;
			}
		if((flag)&&(k<M))
		{
		   a[k++]=i;
		}/*while*/
	}/*for*/
	for(k=0;k<M;k++)
		printf("%d\n",a[k]);
}