// wuziqi.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#define L 19
void output(int a[L][L]);
bool win(int map[L][L],int x,int y, int player);// 1是黑棋，2是白棋
void regret(int map[L][L],int x,int y,int *n);
main()
{
	int map[L][L],i,j,n,x,y,frontx,fronty;
	char player1[20],player2[20];
    for(i=0;i<L;i++)
		for(j=0;j<L;j++)
			map[i][j]=0;
    printf("请输入用户名：白棋");
    scanf("%s",player1);
    printf("请输入用户名：黑棋");
    scanf("%s",player2);
	for(n=0;n<=L*L;n++)
	{
     if(n%2==0)
		 printf("白棋下(输入-1 -1悔棋)");
	 else
		 printf("黑棋下(输入-1 -1悔棋)");
	 scanf("%d%d",&x,&y);

	 if(n%2==0)
	 {
		 if(x==-1)
			 regret(map,frontx,fronty,&n);
		 else
		 {
		     if(map[x][y]==0)
                map[x][y]=1;
		     else
			 {
			    printf("不能重复！\n");
			    n--;
			 }
		 }
	 }
	 else
	 {
		 if(x==-1)
			 regret(map,frontx,fronty,&n);
		 else
		 {
             if(map[x][y]==0)
                map[x][y]=2;
		     else
			 {
			    printf("不能重复！\n");
			    n--;
			 }
		 }
	 }
	 output(map);
	 if(n%2==0)
		 if(win(map,x,y,1))
		 {
			 printf("%s赢！\n",player1);
			 break;
		 }
	 else
		 if(win(map,x,y,2))
		 {
			 printf("%s赢！\n",player2);
			 break;
		 }
	 frontx=x;fronty=y;
    }
}
void output(int a[L][L])
{
	int i,j;
	printf("   ");
	for(i=0;i<L;i++)
		printf("%2d",i);
	printf("\n");
	for(i=0;i<L;i++)
	{
		printf("%3d",i);
		for(j=0;j<L;j++)
		{
			switch(a[i][j])
			{
			case 0:printf("+");break;
			case 1:printf("●");break;
			case 2:printf("○");
			}
		}
		printf("%d\n",i);
	}
	printf("   ");
	for(i=0;i<L;i++)
		printf("%2d",i);
	printf("\n");
}
bool win(int map[L][L],int x,int y,int player)
{
	int n=0,i,j;
	for(j=y-1;(map[x][j]==player)&&(j>=0);j--)
		n++;
    for(j=y+1;(map[x][j]==player)&&(j<L);j++)
		n++;
	if(n>=4)
		return true;
	else
		n=0;
	for(i=x-1;(map[i][y]==player)&&(i>=0);i--)
		n++;
    for(i=x+1;(map[i][y]==player)&&(i<L);i++)
		n++;
	if(n>=4)
		return true;
    else
		n=0;
	for(i=x+1,j=y-1;(map[i][j]==player)&&(i<L)&&(j>=0);i++,j--)
		n++;
    for(i=x-1,j=y+1;(map[i][j]==player)&&(i>=0)&&(j<L);i--,j++)
		n++;
	if(n>=4)
		return true;
    else
		n=0;
	for(i=x-1,j=y-1;(map[i][j]==player)&&(i>=0)&&(j>=0);i--,j--)
		n++;
    for(i=x+1,j=y+1;(map[i][j]==player)&&(i<L)&&(j<L);i++,j++)
		n++;
	if(n>=4)
		return true;
    else
		n=0;
	return false;
}
void regret(int map[L][L],int x,int y,int *n)
{
	map[x][y]=0;
    *n--;
}



