#include <iostream>

using namespace std;

template <class T>

T fmax(T a, T b){
    return (a > b) ? a : b;
}

int fmax(int a, int b){
    return (a > b) ? a : b;
}

int main(){
    cout << fmax(10, 20) << endl;
    cout << fmax(10.5, 20.5) << endl;
    return 0;
}