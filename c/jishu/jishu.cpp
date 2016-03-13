// jishu.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"stdio.h"
bool odd(int,int);
main()
{
	int a[20],i=0,k,r,s=0;
    bool flag;
	char b;
	b=getchar();
	while(b!='\n')
	{
		while((b<'0')||(b>'9'))
		{   
			if(b=='\n')
				break;
			b=getchar();
		}
		while((b>='0')&&(b<='9'))
		{			
			s=s*10+(int)(b-'0');
			b=getchar();
		}
		a[i++]=s;
		s=0;
	}
	flag=true;
	while(flag)
	{
		flag=false;
		for(i=0;i<9;i++)
			if(odd(a[i],a[i+1]))
			{
				r=a[i];
				a[i]=a[i+1];
				a[i+1]=r;
				flag=true;
			}
			
	}
	for(i=0;i<10;i++)
	    printf("%d ",a[i]);
}
bool odd(int a,int b)
{
	if((a%2==0)&&(b%2!=0))
		return true;
	else
		return false;
}