#include <iostream>

using namespace std;

class error{};

int main(){

    float a, b;
    error e;
    cout << "Enter value of a and b: ";
    cin >> a >> b;

    try{
        if (b == 0)
         throw e;
        
        else 
            cout << "a / b = " << a / b;  
    }

    catch(error e){
        cout << "ZerroDivisionError: b can't be zero.";
    }

    return 0;
}