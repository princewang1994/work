// ggggg.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"stdio.h"
#include"math.h"
int a[350],n;
bool have(int);
main()
{
   int T,k,i;
   bool flag;
   scanf("%d",&T);
   k=1;
   while(k<=T)
   {
	   scanf("%d",&n);
	   for(i=0;i<n;i++)
	       scanf("%d",&a[i]);
       flag=true;
	   for(i=1;i<=n-1;i++)
		   if(have(i)==false)
			   flag=false;
	   if(flag)
		   printf("Jolly");
	   else
		   printf("not Jolly");
	   k++;
	   
   }

}
bool have(int i)
{
	int d;
	for(d=0;d<=n-1;d++)
		if(abs(a[d]-a[d+1])==i)
			return true;
	return false;

}