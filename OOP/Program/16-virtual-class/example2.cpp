#include <iostream>

using namespace std;

class base{
    public:
        virtual ~base(){// remove virtual prefix to understand
            cout << "destory base" << endl;
        }
};
class derive1:public base{
    public:
        ~derive1(){
            cout << "destory derive1" << endl;
        }
};
class derive2{
    ~derive2(){
        cout << "destory derive2" << endl;
    }
};

int main(){
    base *bptr = new derive1;
    delete bptr;
    return 0;
}