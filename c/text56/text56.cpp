// text56.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"stdio.h"
bool have(int);
main()
{
	bool flag;
	int n;
	flag=true;
	for(n=1;n<=9;n++)
	{
		if(have(n)==false)				
			flag=false;
	}
	if(flag)
		printf("��ȷ");
	else
     	printf("����");
}
bool have(int n)
{	char a;

do
{
	a=getchar();
	if((int)a-'0'==n)
	return true; 
}    while((int)(a-'0')!=n);
	
     return false;
}