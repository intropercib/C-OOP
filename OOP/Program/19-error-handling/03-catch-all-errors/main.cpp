#include <iostream>

using namespace std;

class error{};

int main(){
    float a,b;
    error e;
    try{
        cout << "Enter the value of a and b: " << endl;
        cin >> a >> b;

        if (b == 0)
            throw e;
        
        else
            cout << "result: " << a / b << endl;
    }

    catch (...){
        cout << "ZeroDivisionError: b can not be zero";
    }
    return 0;
}