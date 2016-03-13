// text6_6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"stdio.h"
bool blank(char);
bool num(char);
bool yuan(char);
main()
{
	char a;
	scanf("%c",&a);
	if(blank(a))
		printf("是空格\n");
	else
		printf("不是空格\n");
	if(num(a))
		printf("是数字\n");
	else
		printf("不是数字\n");
	if(yuan(a))
		printf("是元音\n");
	else
		printf("不是元音\n");
}
bool blank(char a)
{
	if(a==' ')
		return true;
	else
		return false;
}
bool num(char a)
{
	if((a>='0')&&(a<='9'))
		return true;
	else
		return false;
}

bool yuan(char a)
{
	if((a=='a')||(a=='e')||(a=='i')||(a=='o')||(a=='u'))
		return true;
	else
		return false;
}


