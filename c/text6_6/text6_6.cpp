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
		printf("�ǿո�\n");
	else
		printf("���ǿո�\n");
	if(num(a))
		printf("������\n");
	else
		printf("��������\n");
	if(yuan(a))
		printf("��Ԫ��\n");
	else
		printf("����Ԫ��\n");
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


