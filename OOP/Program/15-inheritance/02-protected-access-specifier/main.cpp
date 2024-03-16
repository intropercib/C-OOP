#include <iostream>

using namespace std;

class base{
    protected:
        void show(){
            cout << "show is protected" << endl;
        }
};

class derived: public base{
    public:
        void view(){
            show(); // can only be extracted from the child class.
            cout << "you are in derived" << endl;
        }
};


int main(){
    base a;
    derived d;
    d.view();
    // a.show(); it is inaccessiable
    // d.show(); this is also not allowed
    return 0;
}