// exam2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
struct link
{
	char name[20];
	int age;
	struct link* next;
};
struct link* f(int n)
{
	struct link *p,*h,*r,*r0;
    h=NULL;
	while(n>0)
	{
        p=(struct link*)malloc(sizeof(struct link*));
		p->next=NULL;
		scanf("%s",p->name);
		scanf("%d",&p->age);
		if(h==NULL)
		{   
			h=p;
		}
		else
		{
            r=h;
			r0=NULL;
			while(r!=NULL&&strcmp(r->name,p->name)<0)
			{
                 r0=r;
				 r=r->next;
			}
			if(r0==NULL)
            {
				p->next=h;
				h=p;
			}
			else
			{
				r0->next=p;
				p->next=r;
			}
		}
		n--;
	}
	return h;
}
main()
{
	int n;
	struct link *h,*r;
	scanf("%d",&n);
	h=f(n);
	r=h;
	while(r!=NULL)
	{
		printf("%s ",r->next);
		printf("%d\n",r->age);
		r=r->next;
	}
}