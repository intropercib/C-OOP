/*
Create a class named complex that represent the complex number in format "a+ib",
now overload the comparison operator ">" to find the largest of two complex number and display their angle and magnitude.
*/
#include <iostream>
#include <cmath>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    Complex(int r, int i) : real(r), imag(i) {}
    float magnitude(){
        return sqrt(pow(real, 2) + pow(imag, 2));
    }
    float angle(){
        return atan(imag / real);
    }
    bool operator >(Complex);
};

bool Complex ::operator >( Complex x){
    return this-> magnitude() > x.magnitude();
}


int main()
{

    Complex complex1(1,7), complex2(3, 4);

    if (complex1 > complex2)
    {
        cout << "Complex number 1 is larger." << endl;
        cout << "Angle is " << complex1.angle() << endl;
        cout << "Magnitude is " << complex1.magnitude() << endl;
    }
    else
    {
        cout << "Complex number 2 is larger.";
    }

    return 0;
}
