#ifndef PER
#define PER
#include "string"
#include "Strategy.h"
#include "StrategyFactory.h"
using namespace std;

class Person
{
private:
    Factory *factory;
    string name;
    Strategy * vehicle;

public :
    Person(string s):name(s)
    {
        factory=Factory::getInstance();
        vehicle=factory->createStrat(Car);
    }
    Person(string s, Strategy * vh ):vehicle(vh)
    {
        name = s;
    }
    virtual ~Person()
    {
        delete vehicle;
    }
    string getName()
    {
        return name;
    }
    void setName(string str)
    {
        name=str;
    }
public:
    virtual void goHome()
    {
        cout<<name<<" goHome :"<<vehicle->goHome()<<endl;
    }

};


#endif // PER
