#include <iostream>

using namespace std;

class complex{
    float real;
    float img;
    public:
        complex(){
            real = img = 0;
        }

        friend istream& operator >> (istream&, complex&);
        friend ostream& operator << (ostream&, complex&);
};

istream& operator >>(istream &in, complex&c){
    cout << "Enter complex numbers: ";
    in >> c.real;
    in >> c.img;
    return in;
}

ostream& operator << (ostream &out, complex &c){
    out << c.real << " -+ j" << c.img << endl;
    return out;
}


int main(){
    complex c1, c2, c3;
    cin >> c1 >> c2 >> c3;
    cout << c1 << c2 << c3;
    return 0;
}