// #include <iostream>

// using namespace std;

// class Distance{
//     float feet, inch;

//     public : Distance(){
//         // dummy constructor
//     }
//     Distance(){
//     feet = inch = 0;
//     // default
//     }
//     Distance(float f, float i){
//     feet = f;
//     inch = i;
//     // parametric
//     }
//     void show(){
//     cout << feet << " " << inch << endl;
//     }
//     void getvalue(float ft, float in){
//     feet = ft;
//     inch = in;

//     }
// };

// int main(){
//     Distance d;
//     d.getvalue(2,3);
//     d.show();

//     return 0;
// }

#include <iostream>

using namespace std;

class dist
{
    float inch, feet;

public:
    dist()
    {
        feet = inch = 0;
        // default constructor
    }
    dist(float ft, float in) : feet(ft), inch(in)
    {
    }
    dist(dist &d);
    void add(dist);
    void add(dist, dist);
    void show()
    {
        cout << feet << "::" << inch << endl;
    }
    friend void add(dist, dist);
};

dist::dist(dist &d)
{
    feet = d.feet;
    inch = d.inch;
}
void dist::add(dist d)
{
    feet += d.feet;
    inch += d.inch;
    // without return type
}
void dist::add(dist x, dist y)
{
    feet = x.feet + y.feet;
    inch = x.inch + y.inch;
}
void add(dist x, dist y){
    float feet = x.feet + y.feet;
    float inch = x.inch + y.inch;
    cout << feet <<":" << inch << endl;
}
int main()
{
    dist d1(2, 3), d2(3, 4), d3;
    d1.show();
    d2.show();
    cout << "______________" << endl;
    d1.add(d2);
    d1.show();
    cout << "______________" << endl;
    d3.show();
    cout << "______________" << endl;
    cout << "______________" << endl;
    d1.show();
    d2.show();
    cout << "______________" << endl;
    d3.add(d1, d2);
    d3.show();
    cout << "______________" << endl;
    cout << "______________" << endl;
    d1.show();
    d2.show();
    cout << "______________" << endl;
    add(d1, d2);

    return 0;
}

