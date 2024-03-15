#include <iostream>

using namespace std;

class base{
    public:
        virtual void show(){ // remove virtual prefix to see the effect of non virtual function.
            cout << "inside base class." << endl;
        }
};

class derive1: public base{
    public:
        void show(){
            cout << "inside derive1 class." << endl;
        }
};
class derive2: public base{
    public:
        void show(){
            cout << "inside derive2 class." << endl;
        }
};
class derive3: public base{
    public:
        void show(){
            cout << "inside derive3 class." << endl;
        }
};

int main(){
    base *ptr;
    derive1 d1;
    derive2 d2;
    derive3 d3;

    ptr = &d1;
    ptr->show();
    ptr = &d2;
    ptr->show();
    ptr = &d3;
    ptr->show();

    return 0;
}