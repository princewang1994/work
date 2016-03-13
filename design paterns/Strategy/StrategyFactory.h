#ifndef FAC
#define FAC
#include "ByBus.h"
#include "ByCar.h"

enum Type{Bus=0,Car};

class Factory
{
private :
    Factory(){}
    virtual~Factory(){}
public :
    static Factory * instance;
    static Factory * getInstance()
    {
        if(instance==0)
        {
            instance=new Factory();
        }
        return instance;
    }
public :
    Strategy * createStrat(int type)
    {
        switch(type)
        {
        case Bus: return new ByBus();
        case Car: return new ByCar();
        }
        return 0;
    }

};
Factory * Factory::instance=0;
#endif // FAC
