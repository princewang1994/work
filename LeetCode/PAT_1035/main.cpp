#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

typedef struct
{
    int mod;
    string id;
    string pswd;
} Team;

int modify(Team &t)
{
    int flag = 0;
    for(int i = 0; i < t.pswd.size(); i++)
    {
        switch(t.pswd[i])
        {
            case '1': t.pswd[i] = '@'; t.mod = 1; flag = 1; break;
            case '0': t.pswd[i] = '%'; t.mod = 1; flag = 1; break;
            case 'l': t.pswd[i] = 'L'; t.mod = 1; flag = 1; break;
            case 'O': t.pswd[i] = 'o'; t.mod = 1; flag = 1; break;
        }
    }
    return flag;
}
int main()
{
    int N;
    cin >> N;
    vector<Team> v;
    while(N--)
    {
        Team t;
        t.mod = 0;
        cin >> t.id;
        cin >> t.pswd;
        v.push_back(t);
    }

    int cnt = 0;
    for(int i = 0; i < v.size(); i++)
    {
        cnt += modify(v[i]);
    }

    if(cnt == 0)
    {
        if(v.size() == 1)
            printf("There is 1 account and no account is modified\n");
        else
            printf("There are %d accounts and no account is modified\n", v.size());
    }
    else{
            cout << cnt << endl;
            for(int i = 0; i < v.size(); i++)
            {
                if(v[i].mod)
                {
                    cout << v[i].id << " " << v[i].pswd << endl;
                }
            }
    }

    return 0;
}
