// lianxi6_11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"stdio.h"
bool andian(int i,int j,int b[][5]);
 
main()
{
	int n,i,j,a[5][5]={{5,1,9,8,7},{6,5,6,8,9},{3,4,1,2,2},{5,2,9,6,4},{5,1,3,2,9}};    
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			if(andian(i,j,a))
				printf("A[%d,%d]\n",i,j);

}
bool andian(int i,int j,int b[5][5])
{
	int k,m;
    for(k=0;k<5;k++)
		if(b[i][k]<b[i][j])
           return false;
	for(m=0;m<5;m++)
		if(b[m][j]>b[i][j])
			return false;
	return true;

}
