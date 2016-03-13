// kkk.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "math.h"
struct fen
{
	int up,down;
};
int gcd(int x,int y)
{
	if(y==0)
		return x;
	else
		return gcd(y,x%y);
}
void concise(int *a,int *b)
{
	int p;
	if(*a/(*b)>180)
      *a=*b*360-*a;
	p=gcd(*a,*b);
	*a=*a/p;
	*b=*b/p;
}
main()
{
	int h[100],m[100],k=1,T,i;
	struct fen degree1[100],degree2[100],result[100];
    scanf("%d",&T);
	k=1;
	while(k<=T)
	{
		scanf("%d",&h[k]);
		getchar();
		scanf("%d",&m[k]);
		degree1[k].up=60*h[k]+m[k];
		degree2[k].up=24*m[k];
		result[k].up=abs(degree1[k].up-degree2[k].up);
		result[k].down=4;
		concise(&result[k].up,&result[k].down);        
		k++;
	}
	for(k=1;k<=T;k++)
	{
		if(result[k].down!=1)
		     printf("%d/%d\n",result[k].up,result[k].down);		
		else
             printf("%d\n",result[k].up);
	}
}