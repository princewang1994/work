#include <iostream>

using namespace std;
typedef struct{
    string name;
    char sex;
    string id;
    int grade;
} Student;

int main()
{
    int N;
    cin >> N;

    Student mStu, fStu;

    mStu.grade = 101;
    fStu.grade = -1;
    while(N--)
    {
        Student s;
        cin >> s.name;
        cin >> s.sex;
        cin >> s.id;
        cin >> s.grade;

        if(s.sex == 'M')
        {
            if(s.grade < mStu.grade)
            {
                mStu = s;
            }
        }
        else
        {
            if(s.grade > fStu.grade)
            {
                fStu = s;
            }
        }
    }

    if(fStu.grade == -1)
    {
        cout << "Absent" << endl;
    }
    else
    {
        cout << fStu.name << " " << fStu.id << endl;
    }


    if(mStu.grade == 101)
    {
        cout << "Absent" << endl;
    }
    else
    {
        cout << mStu.name << " " << mStu.id << endl;
    }

    if(fStu.grade == -1 || mStu.grade == 101)
    {
        cout << "NA" << endl;
    }
    else
    {
        cout << fStu.grade - mStu.grade << endl;
    }

    return 0;
}
