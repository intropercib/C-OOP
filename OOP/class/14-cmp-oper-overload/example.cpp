
#include <iostream>
#include <cmath>

using namespace std;

class Complex{
    float real;
    float imag;
    float magnitude;
    float angle;

    public: Complex(){real = imag = magnitude = angle =0;}
    Complex (float r, float i){
        magnitude = sqrt(pow(r,2) + pow(i,2));
        angle = atan(i/r);
    }
    void show(){
        cout << "Magnitude :" << magnitude << "\nAngle :" << angle << endl;
    }
    bool operator >(Complex);
};
bool Complex ::operator>(Complex x){
    if (magnitude > x.magnitude){
        this->show();
    }
}
int main(){
    Complex complex1(1,2), complex2(2,3);
    if (complex1 > complex2){
        complex1.show();
    }
    else{
        complex2.show();
    }
    return 0;
}