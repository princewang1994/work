// island.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
bool yes(char a[6][5],int i,int j);
main()
{
	char map[6][5];
	int i,j,cover=0;
	for(i=0;i<5;i++)
		for(j=0;j<6;j++)
			scanf("%c",&map[i][j]);
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			if(yes(map,i,j))
				cover++;
	printf("小岛的面积为%d",cover);			
}
bool yes(char map[6][5],int i,int j)
{
	int ii,jj;
	bool flag1=false,flag2=false,flag3=false,flag4=false;
	for(jj=0;jj<j;jj++)
		if(map[i][jj]=='0')
			flag1=true;
	for(jj=j+1;jj<5;jj++)		
     	if(map[i][jj]=='0')
			flag2=true;
	for(ii=0;ii<i;ii++)		
     	if(map[ii][j]=='0')
			flag3=true;
	for(ii=i+1;ii<5;ii++)		
     	if(map[ii][j]=='0')
			flag4=true;
	if((flag1)&&(flag2)&&(flag3)&&(flag4))
		return true;
	else
		return false;    

}
