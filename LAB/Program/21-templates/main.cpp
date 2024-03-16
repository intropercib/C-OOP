#include <iostream>

using namespace std;

template <class T>

T maax(T a, T b){
    return (a>b)?a:b;
}

int main(){
    int a = 10, b= 20;
    int z = maax(a, b);
    cout << z << endl;
    return 0;
}