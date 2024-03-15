#include <iostream>

using namespace std;

class baseA{
    protected:
        int a = 10;
};

class baseB: virtual baseA{

};

class baseC: virtual baseA, virtual baseB{
};

class baseD: virtual baseA, virtual baseB, virtual baseC{
    public:
        void show(){
            cout << a;
        }
};

int main(){
    baseD d;
    d.show();

    return 0;
}