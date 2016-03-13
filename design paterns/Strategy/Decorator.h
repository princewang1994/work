#ifndef DEC
#define DEC
#include "Person.h"
class Decorator: public Person
{
private :
    Person * component;

};


#endif // DEC
