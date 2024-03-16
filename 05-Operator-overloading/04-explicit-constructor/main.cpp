#include <iostream>

using namespace std;

class complex{
    float data;
    public:
        complex(){}
        explicit complex(float data){
            this->data = data;
        }

        void show(){
            cout << data;
        }
};

int main(){
    complex c(2);
    c.show();
    // complex d = 2; -> this is not allowed! that is the main concept
    return 0;
}