#ifndef BYCAR
#define BYCAR

class ByCar :public Strategy
{
public :
    string goHome()
    {
        return string("byCar");
    }
};

#endif // BYCAR
