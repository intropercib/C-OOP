#include <iostream>

using namespace std;

template <class T>

T sum(T a, T b){
    return a+b;
}

template <class T>
T sum(T a, T b, T c){
    return a + b + c;
}

int main(){
    cout << sum(10, 20) << endl;
    cout << sum(10, 20, 30) << endl;
    return 0;
}