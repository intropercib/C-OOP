#include <iostream>

using namespace std;

class Distance
{
private:
    float inch, feet;

public:
    Distance()
    {
        feet = inch = 0;
    }

    Distance(float in, float ft) : inch(in), feet(ft)
    {
    }
    void setvalue(float in, float ft)
    {
        this->inch = in;
        this->feet = ft;
    }
    void show(){
        cout << feet <<" "<< inch << endl;
    }
    Distance add(Distance len1);
    ~Distance(){
        // destructor
    }

};
Distance Distance:: add(Distance d1){
    inch += inch + d1.inch;
    feet += feet + d1.feet;
    // return this
    // return nameless object
    return Distance(inch, feet);

}

// Distance Distance:: add(Distance d1){
//     Distance temp;
//     temp.inch = inch + d1.inch;
//     temp.feet = feet + d1.feet;
//     return temp;

// }

int main()
{
    Distance d1, d2(1.2,1.4), d3(2.2, 3.3);
    d1 = d1.add(d2);
    d1.show();
    d2.show();
    d3.show();

}