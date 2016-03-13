// gagdsf.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#define L 10;
bool only(int i,int m[]);
main()
{
	int a[10]={2,3,5,4,5,4,5,7,3,4},i,k=0,b[10];
	for(i=0;i<10;i++)
	{
		if(only(i,a))
			b[k++]=a[i];
	}
	for(i=0;i<k;i++)
		printf("%d",b[i]);

}
bool only(int i,int m[])
{
    int k;
	for(k=0;k<10;k++)
	   if(k!=i)
	   {
		   if(m[k]==m[i])
			   return false;
	   }
	return true;
}