#include <iostream>
#include <fstream>

using namespace std;

int main(){

    char ch;

    ifstream in;

    in.open("student.txt", ios::in); // ::in -> opend in read mode

    if(in.fail()){
        cout << "Error no such file!" << endl;
        cout << "Terminating..." << endl;
        exit(1);
    }

    while(in.get(ch)){
        cout << ch;
    }

    in.close();

    return 0;
}