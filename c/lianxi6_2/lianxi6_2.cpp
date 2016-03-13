// lianxi6_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"stdio.h"
main()
{
   int n,i,j,k;
   char st[20],a;
   k=0;
   a=getchar();
   while(a!='\n')
   {
      st[k]=a;
	  a=getchar();
	  k++;
   }
   scanf("%d",&j);
   for(i=k-1;i>=0;i--)
	   st[i+j]=st[i];
   for(i=k;i<=k+j-1;i++)
	   st[i-k]=st[i];
   for(i=0;i<=k-1;i++)
	   printf("%c",st[i]);



   
}
