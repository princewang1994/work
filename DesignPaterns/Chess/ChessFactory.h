#ifndef FAC
#define FAC
#include "vector"
#include "Chess.h"
#include "string"
#include "WhieChess.h"
#include "BlackChess.h"
using namespace std;
enum { W=0,B};
class ChessFactory
{
private:
    vector <Chess *> factory;
public:
    ChessFactory()
    {
        factory.push_back(new WhiteChess());
        factory.push_back(new BlackChess());
    }
    Chess * getWhiteChess(int color)
    {
        return factory[color];
    }
};

#endif // FAC
