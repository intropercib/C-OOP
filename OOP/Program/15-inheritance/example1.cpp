// ambiguity in multiple inheritance

// if a class is derived from a multiple base classes each of them having at least one function of same name, when a derived class object is used to call that particular function then compiler flag will be ambuity error
// since compiler wont have any idea which particular base class function to call this is known as ambuity inheritance 
// this can be resolved with the base class resolution class operator

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