#include <iostream>
#include <typeinfo>

using namespace std;

class Test{};

int main(){
    int a, *iptr;
    float b, *fptr;
    Test c, *cptr;

    cout << "Type of a is " << typeid(a).name() << endl; 
    cout << "Type of iptr is " << typeid(iptr).name() << endl; 
    cout << "Type of b is " << typeid(b).name() << endl; 
    cout << "Type of fptr is " << typeid(fptr).name() << endl; 
    cout << "Type of c is " << typeid(c).name() << endl; 
    cout << "Type of cptr is " << typeid(cptr).name() << endl; 

    return 0;
}