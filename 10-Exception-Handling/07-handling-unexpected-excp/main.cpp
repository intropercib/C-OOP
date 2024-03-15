#include <iostream>

using namespace std;

void progTrem(){
    cout << "Unexpected Exception Caught!" << endl;
    cout << "Terminating..." << endl;
    exit(0);
}

int main() throw(int, float){
    cout << "Inside main funtion" << endl;
    try{
        set_unexpected(progTrem);
        cout << "Inside try block" << endl;
        throw 'z';
    }

    catch(int n){
        cout << "Expected Exception caught!" << endl;
    }
    catch(float n){
        cout << "Expected Exception caught!" << endl;
    }
    return 0;
}