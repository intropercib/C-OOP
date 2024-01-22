#include <iostream>

using namespace std;

class GetSet{

    int val = 0 ;

    public : GetSet(){
        cout << "Value ::" << val << endl;
    }
    public :void  get(){
        cout << "Value ::" << val;
    }
    public :void  set(int value){
        val = value;
    }
};

int main(){
    GetSet a;

    a.set(12);
    a.get();
}