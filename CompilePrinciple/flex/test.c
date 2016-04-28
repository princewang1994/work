#include<stdio.h>
#include<stdlib.h>

void gcd(int a,int b)
{
	if(a % b == 0)
		return b;
	else return gcd(b,a%b);
	
}
int main(int argc, char * argv[])
{
	int i=0;
	int j=0;
	
	int sum=0;

	for(i=0;i<100;i++)
	{
		sum+=i;//notation1
	}
	sum+=0x4422ffac
	
	double d=1.993028
	double dd=-0.993028

	printf("%d\n",sum);
	return 0;
}
