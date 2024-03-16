#include <iostream>

using namespace std;

class copyCon{
    int data;
    public:
        copyCon(int d){
            data = d;
        }
        copyCon(copyCon &c){
             /*
             & is used to prevent infinite recursion. 
             If not used, it makes a copy of the object which will lead 
             to infinite recursion during copy construction,
              as each copy will attempt to create another copy, and so on.*/
            this->data = c.data;
        }

        void show(){
            cout << data << endl;
        }
};

int main(){
    copyCon c1(12), c2(32); 
    copyCon c3 = c2; 
    c1.show();
    c2.show();
    c3.show();
    return 0;
}