// II.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"stdio.h"
#include"math.h"
float num,f;
int n,a,i,x,r,b,e;
int k[51];
void zhuanhuan(int);
void shuchu1(void);
void shuchu2(void);
main()
{	
	printf("������10������num\n");
	scanf("%f",&num);
	if(num>=0)
		printf("0 ");
	else
	{
		printf("1 ");
	    num=-num;
	}
	n=floor(num);
	f=num-n;
	r=n;
    for(i=1;i<=50;i++)
		k[i]=2;	       //����ȫ��Ϊ2
	zhuanhuan(n);//ת��n�õ�e�Ĵ�С
    e=i+125;     //e���ϻ���127
	zhuanhuan(e);
	shuchu1();
	printf(" ");
    for(i=1;i<=50;i++)
		k[i]=2;	       //����ȫ��Ϊ2
	zhuanhuan(r);//�ٴ�ת��n
	shuchu2();//���n
   while(f!=0)
   {    	    
		printf("%d",(int)floor(f));
		f=2*(f-floor(f));
	}//���С������   
}
void zhuanhuan(int n)
{	
	i=1;
    while(n!=0)
	{           
		a=n%2;
		n=n/2;
		k[i]=a;
		i++;
	}
}
void shuchu1(void)
{
 	for(x=50;x>=1;x--)
	{
	if(k[x]!=2)
		{
		  for(b=x;b>=1;b--)
			printf("%d",k[b]);
		  break;
		}
	}//�����������
}
void shuchu2(void)
{
 	for(x=50;x>=1;x--)
	{
	if(k[x]!=2)
		{
		  for(b=x-1;b>=1;b--)
			printf("%d",k[b]);
		  break;
		}
	}//�����������
}