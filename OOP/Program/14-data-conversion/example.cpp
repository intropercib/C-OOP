#include <iostream>
#include <cmath>

// destination class conversion
using namespace std;
class WestMassLBS;
class EastMassKG;

class EastMassKG // weight in lbs
{
    float kg;

public:
    EastMassKG()
    {
        kg = 0;
    }
    EastMassKG(float k) : kg(k)
    {
    }
    float getter(){
        return kg;
    }
    void show()
    {
        cout << "Weight in kg ::" << kg << endl;
    }
    ~EastMassKG()
    {
    }
    // operator WestMassLBS();
};

class WestMassLBS // weight in kg
{
    float lbs;

public:
    WestMassLBS()
    {
        lbs = 0;
    }
    WestMassLBS(float l) : lbs(l)
    {
    }
    void show()
    {
        cout << "Weight in lbs ::" << lbs << endl;
    }
    ~WestMassLBS()
    {
    }
    WestMassLBS(EastMassKG kiloo){
        lbs = kiloo.getter() * 2.204 ;
    }
};
// EastMassKG::operator WestMassLBS()
// {
//     return WestMassLBS(kg * 2.204);
// }

int main()
{
    EastMassKG kiloo(1);
    WestMassLBS pnd = kiloo;
    kiloo.show();
    pnd.show();
    return 0;
}