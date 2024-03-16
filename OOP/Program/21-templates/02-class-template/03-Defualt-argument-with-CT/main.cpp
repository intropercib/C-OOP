#include <iostream>

using namespace std;

template <class T = int>

class Test{
    private:
        T aVariable;
    
    public:
        Test(T a) {
            aVariable = a;
        }

        void show(){
            cout << ": " << aVariable << endl;
        }
};

int main(){
    Test<> a(10);
    a.show();

    return 0;
}