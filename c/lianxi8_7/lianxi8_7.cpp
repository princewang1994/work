// lianxi8_7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "string.h";
struct student
{ int num,mark[4];
  char name[20];                
};
int input(struct student card[10]);
void output(struct student cardn);
main()
{
	int i,n;
  struct student card[10]; 
  n=input(card);
  for(i=1;i<n;i++)
  {
     output(card[i]);
	 printf("\n");
	}

}
int input(struct student card[10])
{
	int i=1,n,t=0;
	while(strcmp(card[i].name,"#")!=0)
	{
		card[i].num=i++;
		scanf("%s",card[i].name);
		for(n=0;n<4;n++)
		   scanf("%d",&card[i].mark[n]);       
	}
	return i-1;
}
void output(struct student cardn)
{
    printf("Ñ§ºÅ%d\n",cardn.num);
	printf("ĞÕÃû%s\n",cardn.name);
	printf("³É¼¨%d%d%d%d\n",cardn.mark[0],cardn.mark[1],cardn.mark[2],cardn.mark[3]);
}
