#include "vector"
using namespace std;
class CellPhone
{
private:
    vector<Function *> functions;
public :
    CellPhone()
    {

    }
    void addFunction(Function *f)
    {
        functions.push_back(f);
    }

};
