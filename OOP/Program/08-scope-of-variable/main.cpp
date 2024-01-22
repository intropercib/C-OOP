#include <iostream>

using namespace std;

int display(){
    int x = 0;
    static int y = 0;
    x++;
    y++;
    cout << "X :: " << x << "\tY :: " << y << endl;
}

int main(){
    display();
    display();
    display();
    display();
    display();

    return 0;
}