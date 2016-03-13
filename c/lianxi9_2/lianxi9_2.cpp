// lianxi9_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
void fun(int *c,int m,int n)
{
	int u=m,v=n,t;
	while(u<v)
	{
      t=*(c+u);
	  *(c+u)=*(c+v);
	  *(c+v)=t;
	  u++;v--;
	}
}
main()
{
    
}