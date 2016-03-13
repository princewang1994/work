// lianxi8_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "string.h"
struct candidate
{
	char name[20];
	int point;
};
void input(struct candidate a[5]);
void output(struct candidate);
main()
{
	int i;
    struct  candidate people[5];
    strcpy(people[0].name,"zhang");
    strcpy(people[1].name,"wang");
    strcpy(people[2].name,"zhao");
    strcpy(people[3].name,"liu");
    strcpy(people[4].name,"miao");
	input(people);
	for(i=0;i<5;i++)
		output(people[i]);
}
void input(struct candidate a[5])
{
	int i,n;
	for(i=0;i<5;i++)
		a[i].point=0;
	for(i=0;i<25;i++)
	{
		scanf("%d",&n);
		if(n==0)
			(a[0].point)++;
		if(n==1)
			(a[1].point)++;
		if(n==1)
			(a[2].point)++;
		if(n==1)
			(a[2].point)++;
		if(n==3)
			(a[3].point)++;
	}
		
}
void output(struct candidate a)
{
	printf("ÐÕÃû£º%s\n",a.name);
	printf("Æ±Êý£º%d\n",a.point);
}