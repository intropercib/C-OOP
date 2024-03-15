#include <iostream>

using namespace std;

class base{ // abstract class
    public:
        virtual void show() = 0; // pure virtual function
};

class derive1: public base{
    public:
        void show(){
            cout << "inside dervie 1" << endl;
        }
};

class derive2: public base{
    public:
        void show(){
            cout << "inside dervie 2" << endl;
        }
};

int main(){
    // base a; object of abstract class cannot be formed
    base *arr[2];
    derive1 d1;
    derive2 d2;
    arr[0] = &d1;
    arr[1] = &d2;
    
    arr[0]->show();
    arr[1]->show();

    return 0;
}