// lianxi8_12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
struct student
{
	int num;
    float mark[3],aver,homework[3],mid[3],end[3];
	char name[20];
    
};
void input(struct student a[]);
void Mark(struct student a[]);
void output(struct student a);
void underline(struct student a[]);
void average(struct student a[]);
void subject(struct student a[]);
main()
{
	int i;
    struct student achievement[3];
    input(achievement);
    Mark(achievement);
	for(i=0;i<3;i++)
		output(achievement[i]);
	underline(achievement);	
	subject(achievement);
	average(achievement);
}
void input(struct student a[])
{
	int i,j;
    for(i=0;i<3;i++)
	{
		a[i].num=i;
		printf("����");
		scanf("%s",a[i].name);
		for(j=0;j<3;j++)
		{
		   printf("\n��%d�Ƴɼ�",j);
		   scanf("%f%f%f",&(a[i].homework[j]),&(a[i].mid[j]),&(a[i].end[j]));
		}		
	}
}
void Mark(struct student a[])
{
	int i,j;
	for(i=0;i<3;i++)
	{   
		a[i].aver=0;
		for(j=0;j<3;j++)
		{
			a[i].mark[j]=0.1*a[i].homework[j]+0.3*a[i].mid[j]+0.6*a[i].end[j];
			a[i].aver=a[i].aver+a[i].mark[j];
		}
		a[i].aver=a[i].aver/3;
	}
}
void output(struct student a)
{
	     int i,j;
		 printf("����:%s\n",a.name);
	     printf("ѧ��:%d\n",a.num);
         for(j=0;j<3;j++)
		     printf("mark:%f\n",a.mark[j]);
		 printf("ƽ���ɼ�%d\n",a.aver);
}
void subject(struct student a[])
{
	int i,j;
	printf("����γ�");
	scanf("%d",&j);
	for(i=0;i<3;i++)
	{
       printf("����%s ",a[i].name);
       printf("�ɼ�:%d",a[i].mark[j]);
	}
}
void underline(struct student a[])
{
	int i,j;
	printf("ͳ�Ʋ������������������Ŀj");
	scanf("%d",&j);
	for(i=0;i<3;i++)
	{
		if(a[i].mark[j]<60)
		{
			printf("����:%s \n",a[i].name);
			printf("�ɼ�:%d \n",a[i].mark[j]);
		}
	}
}
void average(struct student a[])
{
    bool flag=true;
	struct student r;
	int i;
	printf("ƽ���ɼ���");
	while(flag)
	{
		flag=false;
		for(i=0;i<2;i++)
			if(a[i].aver<a[i+1].aver)
			{
                r=a[i];
				a[i]=a[i+1];
				a[i+1]=r;
				flag=true;
			}
	}
	for(i=0;i<3;i++)
	{
		printf("����:%s ",a[i].name);
		printf("ƽ���ɼ�:%d\n",a[i].aver);
	}
}
