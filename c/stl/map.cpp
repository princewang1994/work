#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<stdlib.h>
#include<map>

using namespace std;

int main()
{
	map<string,int> hashMap;

	
	hashMap["param1"]=123;
	hashMap["param2"]=333;
	hashMap["param3"]=444;

	char  key[256];
	while(cin>>key && strcmp(key,"0"))
	{
		cout<<hashMap[key]<<endl;
	}

	return 0;
}
