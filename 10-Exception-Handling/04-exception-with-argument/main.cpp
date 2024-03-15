#include <iostream>
#include <string>

using namespace std;

class Division{
    public:
        class ZeroDivisionError{
            public:
                int eno;
                string desp;
            ZeroDivisionError(int eno, string desp){
                this->eno = eno;
                this->desp = desp;
            }
        };

        Division(float x, float y){
            if (y == 0){
                throw ZeroDivisionError(1, "Value of y cannot be zero.");
            }

            else{
                cout << "A / B = " << x / y;
            }
        }
};

int main(){
    int a, b;
    cout << "Enter value of a and b: ";
    cin >> a >> b;

    try{
        Division div(a,b);
    }

    catch(Division::ZeroDivisionError e){
        cout << "Errrno: " << e.eno << endl;
        cout << "Description: " << e.desp << endl;
    }
    return 0;
}