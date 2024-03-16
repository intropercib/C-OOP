#include <iostream>
using namespace std;

int& set(int &c){
    return c;
}

int main(){
    int x;
    set(x) = 30;
    cout << x;
}