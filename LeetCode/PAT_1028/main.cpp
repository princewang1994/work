
/**
1.��vectorʵ�֣�ͨ��sort()�������򣬷������һ�����ӳ�ʱ����Ҫ������������<�������
2.��������ʵ�֣�����qsort()�������򣬷��ֻ��ǳ�ʱ����Ҫ�Լ�дcompare()������

**/
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cstring>
#include<cstdlib>
using namespace std;
int N=0,C=0;
class Student
{
public:
    char id[10];
    char name[10];
    int grade;
    Student()
    {
        grade=-1;
    }
};
int compare1 (const void * a, const void * b)
{
            return ((Student*)a)->id>((Student*)b)->id?1:-1;
}
int compare2 (const void * a, const void * b)
{
            return ((Student*)a)->name>=((Student*)b)->name?1:-1;
}
int compare3 (const void * a, const void * b)
{

            return ((Student*)a)->grade>=((Student*)b)->grade?1:-1;
}
Student stu[100000];
int main()
{
    cin>>N>>C;
    Student temp;
    for(int i=0;i<N;i++)
    {
       // scanf("%s %s %d",stu[i].id,stu[i].name,&stu[i].grade);
        cin>>stu[i].id>>stu[i].name>>stu[i].grade;
    }
    switch(C)
    {
    case 1:
        qsort (stu, N, sizeof(Student), compare1);
        break;
    case 2:
        qsort (stu, N, sizeof(Student), compare2);
        break;
    case 3:
        qsort (stu, N, sizeof(Student), compare3);
        break;
    }

    for(int i=0;i<N;i++)
    {
        cout<<stu[i].id<<" "<<stu[i].name<<" "<<stu[i].grade<<endl;
    }
    return 0;
}
