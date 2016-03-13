// lianxi7_16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
main()
{
	int i,*r,num[10]={5,8,9,7,4,6,3,0,2,5},*p[10];
	bool flag=true;
	for(i=0;i<10;i++)
		p[i]=&num[i];
	while(flag)
	{
       flag=false;
	   for(i=0;i<9;i++)
		   if(*p[i]>*p[i+1])
		   {
             r=p[i];
			 p[i]=p[i+1];
			 p[i+1]=r;
			 flag=true;
		   }
	}
	for(i=0;i<10;i++)
		printf("%d",*p[i]);

}