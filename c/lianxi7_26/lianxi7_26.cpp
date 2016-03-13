// lianxi7_26.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
main()
{
   char str[5][20],r[20];
   int i,k;
   bool flag;
   for(i=0;i<5;i++)
	   scanf("%s",str[i]);
   printf("ÊäÈë¼ìË÷¹Ø¼ü×Ö");
   scanf("%s",r);
   for(i=0;i<5;i++)
   {
       flag=true;
	   for(k=0;str[i][k]!='\0',r[k]!='\0';k++)
		   if(str[i][k]!=r[k])
			   flag=false;
	   if(flag)
		   printf("str[%d]\n",i);
   }
}