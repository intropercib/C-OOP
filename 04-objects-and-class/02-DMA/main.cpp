#include <iostream>

using namespace std;

class Test{
        public:
        Test(){
            cout << "Constructor called." << endl;
        }

        ~Test(){
            cout << "Destructor called." << endl;
        }
};

int main(){
    Test *myTest = new Test[4];
    cout << "---------------" << endl;
    delete [] myTest;

    return 0;
}