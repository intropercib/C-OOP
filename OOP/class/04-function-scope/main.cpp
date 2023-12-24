#include <iostream>

using namespace std;

class display{

    public : void show(){
        cout << "Hello World" << endl;

    }
    public : void wish();
};

void display :: wish(){
    cout << "Merry Christmas." << endl;
};

int main(){

    display d;
    d.show();
    d.wish();

    return 0;
}