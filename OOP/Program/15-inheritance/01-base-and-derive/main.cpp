#include <iostream>

using namespace std;

class base{
    public:
        void show(){
            cout << "You are in base class" << endl;
        }
};

class derived: public base{
    public:
        void view(){
            cout << "You are in derived class" << endl;
        }
};

int main(){
    derived d1;
    d1.show();
    d1.view();
    return 0;
}