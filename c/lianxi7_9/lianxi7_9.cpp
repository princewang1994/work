// lianxi7_9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"stdio.h"
void check(char *);
main()
{
	char a,str[20];
	int i;
	printf("�����������\n");
	a=getchar();
    while(a!='\n')
	{
		str[i++]=a;
		a=getchar();
	}
	str[i]='\0';
	check(str);

}
void check(char *a)
{
    int b=0,s=0,blank=0,num=0,other=0,i;
	for(i=0;a[i]!='\0';i++)
	{
		if((a[i]>='a')&&(a[i]<='z'))
          s++;
		else
		{
			if((a[i]>='A')&&(a[i]<='Z'))
				b++;
            else
			{
				if((a[i]>='0')&&(a[i]<='9'))
					num++;
				else
				{
					if(a[i]==' ')
						blank++;
					else
						other++;
				}
            }
		}
		
	}
	printf("��д��ĸ%d��\nСд��ĸ%d��\n�ո�%d��\n��������%d��",b,s,blank,other);
}