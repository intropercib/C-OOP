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

        Complex operator +(Complex c){
            this->real += c.real;
            this->img += c.img;

            return *this;
        }

        void show(){
            cout << real << " i" << img;
        }
};

int main(){
    Complex c1(1.1, 2.2), c2(2.2,3.3), c3;

    c3 = c1 + c2;
    c3.show();


    return 0;
}