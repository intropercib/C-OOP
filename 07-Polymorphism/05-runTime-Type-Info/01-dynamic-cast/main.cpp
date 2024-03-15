// converts pointer types CONSIDERING the types of pointer as well.
#include <iostream>

using namespace std;

class base{
    public:
        virtual void func(){}
};

class derived: public base{};

bool isDerived(base *ptr){
    derived *dptr;

    if(dptr = dynamic_cast<derived*>(ptr)){
        return true;
    }

    else{
        return false;
    }
}

int main(){
    // run these two lines to know the concept
    base *bptr = new base;
    // base *bptr = new derived;

    if(isDerived(bptr)){
        cout << "pointer is of derived class";
    }
    else{
        cout << "pointer is NOT of derived class";
    }

    
    return 0;
}