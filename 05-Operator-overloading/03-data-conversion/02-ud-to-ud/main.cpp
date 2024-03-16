#include <iostream>
#include <typeinfo>

using namespace std;

class UD1{
    public:

        float data;
    
        UD1(float d){
            cout << d << endl;
            data = d;
        }

        void show(){
            cout << data << endl;
        }
};

class UD2{

    public:
        int data;
        
        UD2(int d){
            data = d;
        }

        UD2(UD1 u){
            data = static_cast<int>(u.data);
        } 

        void show(){
            cout << data << endl;
        }
};

int main(){
    UD1 u1(13.3);
    UD2 u2(15);

    u2 = u1.data;

    u2.show();

    return 0;

}