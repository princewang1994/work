#ifndef  MAN
#define  MAN
#include "iostream"
#include "Person.h"
using namespace std;
class Man:public Person
{
public:
    Man(string name):Person(name)
    {

    }
    void goHome()
    {
        cout<<"Man:";
        Person::goHome();
    }
};
#endif // MAN
