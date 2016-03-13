// lianxi9_9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
float f(int a,int b,char c);
main()
{
	int a,b;
	char c;
	scanf("%d%c%d",&a,&c,&b);
	printf("a%cb=%f\n",c,f(a,b,c));
}
float f(int a,int b,char c)
{
	switch(c)
	{
	case '+':return a+b;break;
	case '-':return a-b;break;
	case '*':return a*b;break;
	case '/':return (float)a/b;
	}
}