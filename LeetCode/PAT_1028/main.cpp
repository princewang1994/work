#include <iostream>
#include <string.h>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

typedef struct
{
    int id;
    char name[16];
    int grade;
} stu;

vector<stu> v;
int cmp1(stu s1, stu s2)
{
    return s1.id < s2.id;
}
int cmp2(stu s1, stu s2)
{
    int r = strcmp(s1.name, s2.name);
    if(r != 0)
    {
        return r < 0;
    }
    else return s1.id < s2.id;
}

int cmp3(stu s1, stu s2)
{
    if(s1.grade != s2.grade)
    {
        return s1.grade < s2.grade;
    }
    else return s1.id < s2.id;
}

int main()
{
    int N;
    int column;
    cin >> N >> column;
    int n = N;
    while(n--)
    {
        stu s;
        cin >> s.id >> s.name >> s.grade;
        v.push_back(s);
    }
    switch(column){
    case 1:
        sort(v.begin(), v.end(), cmp1);
        break;
    case 2:
        sort(v.begin(), v.end(), cmp2);
        break;
    case 3:
        sort(v.begin(), v.end(), cmp3);
        break;
    }

    for(int i = 0; i < N; i++)
    {
        printf("%06d %s %d\n", v[i].id, v[i].name, v[i].grade);
    }
    return 0;
}
