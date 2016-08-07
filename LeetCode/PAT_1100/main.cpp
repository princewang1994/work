#include <iostream>
#include <string>
#include <stdlib.h>
#include <map>
using namespace std;
string n1[] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string n2[] = {"tret", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
map<string, int> m1;
map<string, int> m2;
void init()
{
    for(int i = 0; i < 13; i++)
    {
        m1[n1[i]] = i;
        m2[n2[i]] = i;
    }
}
int transfer(string s1, string s2)
{

    if(s1 != "-1" && s2 != "-1")
    {
       // cout << s1 << s2 << endl;
        //cout << m2[s1] << m1[s2] << endl;
        return m2[s1] * 13 + m1[s2];
    }
    else if(s2 == "-1")
    {
        return m2[s1] * 13;
    }
    else if(s1 == "-1")
        return m1[s2];
    else
        return 0;
}
int main()
{
    init();

    int N;
    cin >> N;
    cin.ignore();
    //return 0;
    while(N --)
    {
        string s;
        getline(cin, s);

        if(isalpha(s[0]))
        {
            int index = s.find(" ");
            string s1, s2;
            if(index < s.length() - 1)
            {
                s1 = s.substr(0, index);
                s2 = s.substr(index + 1, s.length() -1);
               // cout << s1 << endl;
               // cout << s2 << endl;
               // return 0;
            }
            else
            {
                if(m1[s] == 0 && m2[s] == 0)
                {
                    cout << 0 << endl;
                    continue;
                }
                else if(m1[s] != 0)
                {
                    s1 = "-1";
                    s2 = s;
                    //cout <<
                    s1 << endl;
                   // cout << s2 << endl;
                }
                else
                {
                    s2 = "-1";
                    s1 = s;
                }
            }
            cout << transfer(s1, s2) << endl;
        }
        else
        {
            int a  = atoi(s.c_str());
            int aa = a / 13;
            int bb = a % 13;
            if (aa != 0 && bb != 0)
                cout << n2[aa] << " " << n1[bb] << endl;
            else if (aa == 0)
                cout << n1[bb] << endl;
            else if (bb == 0)
                cout << n2[aa] << endl;
            else
                cout << "tret" << endl;
        }
    }

    return 0;
}
