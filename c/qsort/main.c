#include<stdio.h>

void copy(int src[],int dst[], int len)
{
		int i;
		for(i=0;i<len;i++)
		{
				dst[i]=src[i];
		}
}
int cmp(void * a, void * b)
{
		int * p1= (int * )a;
		int * p2= (int * )b;
		return *p1 > *p2; 
}

void my_qsort(int num[], int left, int right)
{
		if ( left >= right ) return;
		int key=num[left];
		int i=left;
		int j=right;
		while(i<j)
		{
				while(i<j && num[j]>=key)
					j--;
				if(i<j)
					num[i++]=num[j];
				while(i<j && num[i]<key)
					i++;
				if(i<j)
					num[j--]=num[i];	
		}
		num[i]=key;
		my_qsort(num,left,i-1);	
		my_qsort(num,i+1,right);	
}

int main(int argc, char * argv[])
{
		int num[]={1,5,4,4,5,6,2,43,5,6,7};	
		int num2[100]; 
		int i=0;

		copy(num,num2,11);
		for(;i<11;i++)
		{
				printf("%d ",num2[i]);
		}
		printf("\n");
		qsort(num,11,sizeof(int),cmp);

		for(i=0;i<11;i++)
		{
				printf("%d ",num[i]);
		}
		printf("\n");

		my_qsort(num2,0,10);

		for(i=0;i<11;i++)
		{
				printf("%d ",num2[i]);
		}
		printf("\n");

		return 0;
}
