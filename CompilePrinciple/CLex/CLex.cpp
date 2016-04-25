#include"CLex.h"
#include"string.h"
#include<iostream>
#include<vector>

using namespace std;

char keyword[][10]={
"main" ,"auto" ,"short" ,"int" ,"long" ,"float" ,"double" ,"char" ,"struct" ,"union" ,"enum" ,"typedef" ,"const",
"unsigned" ,"signed" ,"extern" ,"register" ,"static" ,"volatile" ,"void" ,"if" ,"else" ,"switch" ,"case" ,"for" ,"do",
"while" ,"goto" ,"continue" ,"break" ,"default" ,"sizeof" ,"return"};

char op[][5]={
"(" ,")" ,"[" ,"]" ,"->" ,"." ,"!" ,"~" ,"++" ,"--" ,"+" ,"-" ,"*" ,"/" ,"&" ,"|" ,"%"
,"<<" ,">>" ,"<" ,"<=" ,">" ,">=" ,"==" ,"!=" ,"&&" ,"||" ,"=" ,"+=" ,"-=" ,"*=" ,"/="
,"&=" ,"|=" ,"<<=" ,">>=" ,"," ,";" };

bool CLex::isKeyword(const char* word)
{
	for(int i=0;i<33;i++)
	{
		if(!strcmp(word,keyword[i]))
		{
			return true;
		}
	}	
	return false;
}
vector<char> CLex::d()
{
	vector<char> vd;
	for(int i='0';i<='9';i++)
	{
		vd.push_back(i);	
	}
	return vd;
}
vector<char> CLex::d1()
{
	vector<char> vd;
	for(int i='1';i<='9';i++)
	{
		vd.push_back(i);	
	}
	return vd;
}

vector<char> CLex::low()
{
	vector<char> vd;
	for(int i='a';i<='z';i++)
	{
		vd.push_back(i);	
	}
	return vd;
}
vector<char> CLex::up()
{
	vector<char> vd;
	for(int i='A';i<='Z';i++)
	{
		vd.push_back(i);	
	}
	return vd;
}


