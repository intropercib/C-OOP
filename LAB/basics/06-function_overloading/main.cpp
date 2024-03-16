#include <iostream>
// when a same function in repeats by varing the types of arguments or the number of arguments of both :: function overloading

using namespace std;

int sum(int a){
    cout << "Single Arguments" << endl;
    return a + a;
}
int sum(int a, int b){
    cout << "Double Arguments" << endl;
    return a + b;
}
int sum(int a, int b, int c){
    cout << "More than two Arguments" << endl;
    return a + b + c;
}

int main(){
    cout << "Addition" << endl;

    int a = 5, b = 15, c =5;
    cout << sum(a) << endl;
    cout << sum(a, b) << endl;
    cout << sum(a, b, c) << endl;

    return 0 ;
    
}
