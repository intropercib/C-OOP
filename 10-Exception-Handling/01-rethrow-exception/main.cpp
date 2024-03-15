#include <iostream>

using namespace std;

class Division{
    public:
        class ZeroDivisionError{};
    
        Division(float x, float y){

            try{
                if (y == 0){
                    throw ZeroDivisionError();
                }
            }

            catch(ZeroDivisionError e){
                throw;
            }
        }
};

int main(){
    float a,b;
    try{
        cout << "Enter value of a and b: ";
        cin >> a >> b;
        Division div(a,b);
    }

    catch(Division::ZeroDivisionError){
        cout << "ZerroDivisionError: value of b should not be zero.";
    }
    return 0;
}