#include <iostream>
#include <string>

using namespace std;


class base{
    string name;
    public:
    void set(string name){
        this->name = name;

    }
    void show(){
        cout<< "Base class   " << name << endl;
    }
};

class der:public base{
    private :
    int age;
    public:
    void set(string name, int age){
        base::set(name);
        this->age = age;
    }
    void show(){
        base::show();
        cout << "der class  " << age << endl;
    }
};

int main(){
    der d;
    d.set("ram", 10);
    d.base::show();
    d.show();
    return 0;
    
}