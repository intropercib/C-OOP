#include <iostream>

using namespace std;

template <class T>

inline T sum(T a, T b){
    return a + b;
}

int main(){
    cout << sum(1,2) << endl;
    cout << sum(1.1,2.2) << endl;
    cout << sum('1','B') << endl; //assci of 1 and ascci of B is added!
    return 0;
}