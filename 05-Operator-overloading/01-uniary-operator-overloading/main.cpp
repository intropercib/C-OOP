#include <iostream>

using namespace std;

class complex{

    private:
        float real, img;

    public:
        complex(){
            real = img = 0;
        }

        complex(float real, float img){
            this->real = real; this->img = img;
        }

        complex operator ++(){
            real = ++this->real;
            img = ++this->img;
        }

        complex operator ++(int){
            real = this->real++;
            img = this->img++;
        }

        void show(){
            cout << real << " i" << img << endl;
        }
};

int main(){
    complex c1(1,2), c2(3,4);
    ++c1;
    ++c2;
    c1.show();
    c2.show();
    return 0;
}