#include <iostream>

using namespace std;

class converter{
    float data;
    public:
        converter(float d){
            data = d*2;
        }

        void show(){
            cout << data;
        }
};

int main(){

    float a = 8.3;
    converter c(2.5);
    c = a;
    c.show();
    return 0;
}