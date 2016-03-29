#ifndef STR
#define STR
#include "string"
using namespace std;


class Strategy
{
public :
    virtual ~Strategy()
    {

    }
    virtual string goHome()=0;
};


#endif // STR
