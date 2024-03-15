#include <iostream>

using namespace std;

void progTrem(){
    cout << "Unexpected Exception Caught!" << endl;
    cout << "Terminating..." << endl;
    exit(0);
}

int main(){
    cout << "Inside main funtion" << endl;
    try{
        set_terminate(progTrem);
        cout << "Inside try block" << endl;
        throw 5;
    }

    catch(float n){ // try catching int datatype to go through this block
        cout << "Expected Exception caught!" << endl;
    }
    return 0;
}