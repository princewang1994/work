// lianbiao.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
typedef struct link
{
	int date;
    struct link* next;
} linktype;
typedef linktype* linkpointer;
linkpointer input(void)
{
	linkpointer p,r,r0,top,rear;
	int num;
    top=(linkpointer)malloc(sizeof(linktype));
	top->date=0;
	rear=(linkpointer)malloc(sizeof(linktype));
	rear->date=100000;
	rear->next=NULL;
	top->next=rear;
	scanf("%d",&num);
	while(num!=0)
	{
		p=(linkpointer)malloc(sizeof(linktype));
		p->date=num;
		r=top;
		while(r->date<num)
		{
			r0=r;
			r=r->next;
		}
        p->next=r;
		r0->next=p;	
		scanf("%d",&num);
	}
	return top;
}
main()
{
     linkpointer p,b,r;     
	 r=input();
	 r=r->next;
	 while(r->next!=NULL)
	 {
		 printf("%2d",r->date);
		 r=r->next;
	 }
}
