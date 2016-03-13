// lianxi4_16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include"math.h"
bool armstrong(int);
main()
{ 
   int n;
   for(n=100;n<=999;n++)
   {
	   if(armstrong(n))
		   printf("%d\n",n);
   }
}
bool armstrong(int n)
{
	int r,m,s;
	m=n;
	s=0;
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		s=s+pow(r,3);
	}
	if(m==s)
		return true;
	else
		return false;

	
}
