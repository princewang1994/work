#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	int num[10]={4,3,3,5,2,3,5,6,2,1};
	sort(num,num+10);
	for(int i=0;i<10;i++)
		cout<<num[i]<<" ";
	cout<<endl;
	
	return 0;

}

