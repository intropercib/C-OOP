#include <iostream>
#include <string>

using namespace std;

class Distance
{
    float inch, feet;

public:
    float herum = 0;
    Distance() {}
    Distance(float f, float i) : feet(f), inch(i)
    {
    }
    void setValue(float f, float i){
        feet = f;
        inch = i;
    }
    void show(){
        cout << "feet :" << feet << " " << "inch :" << inch << endl;
    }
    friend Distance operator +(Distance, Distance);
};

Distance operator +(Distance x, Distance y){
    float ft, in;
    cout << y.herum;
    ft = y.feet + x.feet;
    in = y.inch + x.inch;
    return Distance(ft, in);
}