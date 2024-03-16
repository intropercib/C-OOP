#include <iostream>

using namespace std;


class complex{
    private:
        static int count;
        float real, img;

    public:        
        complex(){
            real = img = 0;
        }

        complex(float real, float img){
            this->real = real;
            this->img = img;
        }

        void set(float, float);
        
        static void inc();
};

int complex::count = 0;

void complex::set(float r, float i){
    real = r;
    img = i;
    inc();
}

void complex::inc(){
    count += 1;
    cout << count << endl;
}

int main(){
    complex c1;
    complex c2;
    complex c3;
    c1.set(12.2,23.1);
    c2.set(12.2,23.1);
    c3.set(12.2,23.1);
    return 0;
}