#include <iostream>

using namespace std;

class base{
    public:
        void show(){
            cout << "show method from base" << endl;
        }
};

class derived: public base{
    public:
        void show(){
            cout << "show method from derived" << endl;
        }
};

int main(){
    derived d;
    d.base::show();
    d.show(); // function of base class is override when we are not specific.
    return 0;
}