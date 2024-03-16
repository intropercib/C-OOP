#include <iostream>

using namespace std;

class Complex{
    float real,img;

    public:

        Complex(){
            real = img = 0;
        }

        Complex(float r, float i){
            real = r; img = i;
        }

        void show(){
            cout << real << " i" << img << endl;
        }

        friend Complex operator +(Complex, Complex);
};

Complex operator +(Complex c1, Complex c2){
    c1.real += c2.real;
    c1.img += c2.img;

    return c1;
}

int main(){
    Complex c1(1.1, 2.2), c2(2.2,3.3), c3;

    c3 = c1 + c2;
    c3.show();

    return 0;
}