#ifndef BUS
#define BUS
#include "Strategy.h"
#include "string"
class ByBus :public Strategy
{
public :
    string goHome()
    {
        return string("buBus");
    }
};

#endif // BUS
