#include <iostream>
#include <cmath>

using namespace std;

class Math{
    public:
        class ZeroDivisionError{};
        class NegSqrtError{};

        Math(float x, float y) throw(ZeroDivisionError){
            if (y == 0){
                throw ZeroDivisionError();
            }

            else{
                cout << "X / Y = " << x /  y << endl;
            }
        }

        Math(float num) throw(NegSqrtError){
            if (num < 0){
                throw NegSqrtError();
            }

            else{
                cout << "Sqrt of " << num << " is: " << sqrt(num) << endl;
            }
        }
};

int main(){
    int a , b;
    try{
        cout << "Enter value for a and b: ";
        cin >> a >> b;
        Math s(a);
        Math m(a, b);
    }
    catch(Math::ZeroDivisionError){
        cout << "ZeroDivisonError: value of b cannot be zero.";
    }

    catch(Math::NegSqrtError){
        cout << "NegSqrtError: value of num cannot be negative.";
    }
    return 0;
}