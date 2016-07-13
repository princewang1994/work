#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char str[100];
	char input[100];

	int broken[1000];
	memset(broken, 0, sizeof(broken));

	cin>>str>>input;

	int p1=0;
	int p2=0;

	while(str[p1]!=0)
	{
		if(str[p1]==input[p2])
		{
			p1++;p2++;
			continue;
		}
		else
		{
			char key=str[p1];

			if(key>='a' && key<='z')
				key=key+'A'-'a';

			if(!broken[key])
			{
				broken[key]=1;
                cout<<key;
			}
			p1++;
		}
	}
	cout<<endl;
	return 0;
}
