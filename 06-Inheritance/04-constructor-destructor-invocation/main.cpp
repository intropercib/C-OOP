#include <iostream>

using namespace std;

class base{
    public:
        base(float a, float b){
            cout << "a * b = " << a * b << endl; 
        }

        ~base(){
            cout << "base destroyed" << endl;
        }
};

class derived: public base{
    public:
        derived(float a, float b): base(a,b) {
            cout <<  "a * a = " << a * a << endl; 
        }

        ~derived(){
            cout << "derived destroyed" << endl;
        }
};

int main(){
    derived d1(1.1 , 2.2);
    return 0;
}