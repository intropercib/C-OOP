#include <iostream>

using namespace std;

class base1{
    public :
    void show(){
        cout << "BASE1" << endl;
    }
};
class base2{
    public :
    void show(){
        cout << "BASE2" << endl;
    }
};
class base3{
    public :
    void show(){
        cout << "BASE3" << endl;
    }
};

class der : public base1, public base2, public base3{
    public:
    void show(){
        base1::show();
        base2::show();
        base3::show();
        cout << "DER" << endl;
    }
};
int main(){
    der d;
    d.show();
    return 0;
}