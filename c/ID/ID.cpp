// ID.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
typedef struct linktable
{
	struct student
	{
		char name[20];
		int num,mark;
	} student0;
    struct linktable* next;
} linktype;
typedef linktype* linkpointer;
linkpointer input()
{
	linkpointer p,b,r,r0;
    p=(linkpointer)malloc(sizeof(linktype));
    p->student0.num=0;
	b=p;
	p=(linkpointer)malloc(sizeof(linktype));
	p->student0.num=100;
	p->next=NULL;
	b->next=p;
	int n=1,i=1;;
	while(n==1)
	{
		p=(linkpointer)malloc(sizeof(linktype));
		printf("输入第%d个学生学号",i);
		scanf("%d",&(p->student0.num));
		if(p->student0.num==0)
			break;
		printf("输入第%d个学生姓名",i);
		scanf("%s",p->student0.name);
		printf("输入第%d个学生分数",i++);
		scanf("%d",&p->student0.mark);
		r=b;
        while(r->student0.num<p->student0.num)
		{
            r0=r;
			r=r->next;
		}
		p->next=r;
		r0->next=p;
	}
	return b;
}
void output(linkpointer b)
{
	linkpointer r;
	r=b->next;
	int i=1;
	while(r->next!=NULL)
	{
		printf("第%d个学生数据\n",i++);
		printf("学号：%d\n",r->student0.num);
		printf("姓名：%s\n",r->student0.name);
		printf("成绩：%d\n\n",r->student0.mark);
        r=r->next;
	}
}
main()
{
	linkpointer p,b;
    b=input();
	output(b);
}

