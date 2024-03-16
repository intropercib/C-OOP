#include <iostream>

using namespace std;
int divide(int a, int b){
    if(b== 0){
        throw b;
    }
    else{
        return a/b;
    }
}
int main(){
    int a, b;
    char x[12];
    cout << "Numbers" << endl;
    try{
        cin >> a >> b;
        int z = divide(a, b);
        cout << "Result :: " << z << endl;
    }
    catch (int b){
        cout << "cant be divided by zero"<< endl;
    }
    return 0;
}