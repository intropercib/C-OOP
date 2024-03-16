#include <iostream>

using namespace std;

int main(){
    int i;
    while (true){
        cout << "Enter a number: ";
        cin >> i;

        if(cin.good()){
            cin.ignore(10, '\n'); // ignores white spaces (newline)
            cout << "You entered " << i << endl;
            break;
        }

        cin.clear();
        cout << "Not a number." << endl;
        cin.ignore(10, '\n'); // ignores white spaces (newline)

    }
    return 0;
}