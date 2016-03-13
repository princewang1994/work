// lainxi7_23.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
void exchange(int a[5][5]);
main()
{
	int a[5][5]={
	{2,5,9,8,7},
	{9,6,3,2,7},
	{0,3,50,8,7},
	{1,2,3,6,5},
	{8,7,9,5,2}
	},i,j;
	exchange(a);
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			printf("%d  ",a[i][j]);
		printf("\n");
	}
}
void exchange(int a[5][5])
{
     int *p[25],*r,i,r1;
     bool flag=true;
	 
	 for(i=0;i<25;i++)
		 p[i]=&a[0][0]+i;
	 while(flag)
	 {
		flag=false;
		for(i=0;i<24;i++)
			if(*p[i]>*p[i+1])
			{
               r=p[i];
			   p[i]=p[i+1];
			   p[i+1]=r;
			   flag=true;
			}
	 }
	 for(i=0;i<25;i++)
		 printf("%d ",*p[i]);
	 printf("\n");
     r1=a[2][2];
	 a[2][2]=*p[24];
	 *p[24]=r1;

	 r1=a[0][0];
	 a[0][0]=*p[0];
	 *p[0]=r1;

	 r1=a[0][4];
	 a[0][4]=*p[1];
	 *p[1]=r1;	

	 r1=a[4][4];
	 a[4][4]=*p[2];
	 *p[2]=r1;
	 
	 r1=a[4][0];
	 a[4][0]=*p[3];
	 *p[3]=r1;

}