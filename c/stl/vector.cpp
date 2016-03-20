#include<iostream>
#include<string.h>
#include<vector>

using namespace std;

int main()
{
	vector<char*> v;
	
	char *str=new char[256];
	
	cin>>str;
	while(strcmp(str,"0"))	
	{
		v.push_back(str);
		str=new char[256];
		cin>>str;
	}
	
	for(int i=0;i<v.size();i++)
	{
		cout<<v.at(i)<<endl;
		delete v.at(i);
	}
	return 0;
}
