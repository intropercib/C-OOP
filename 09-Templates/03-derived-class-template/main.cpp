#include <iostream>

using namespace std;

template <class T>
class base{
    public:
        base(T x){
            cout << "from base: " << x << endl;
        }
};

class derived: public base<int>{
    public:
        derived(int x) : base<int>(x) {
            cout << "from derived: " << x - 1 << endl;
        }

};

int main(){
    derived anyVar(19);
    return 0;
}