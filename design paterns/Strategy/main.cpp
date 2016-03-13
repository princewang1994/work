#include <iostream>
#include "Person.h"
#include "Strategy.h"
#include "ByBus.h"
#include "StrategyFactory.h"
#include "Man.h"
using namespace std;

int main()
{
    Man wang("Wangyanjie");

    wang.goHome();
    return 0;
}
