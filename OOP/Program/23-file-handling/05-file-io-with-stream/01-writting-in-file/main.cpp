#include <iostream>
#include <fstream>

using namespace std;

int main(){
    char ch;

    ofstream out;
    out.open("student.txt",ios::out); // ::out -> opend in write mode

    cout << "Enter chars: ";
    while((ch = cin.get()) != '\n'){
        out.put(ch);
    }

    out.close();
    cout << "file written" << endl;

    return 0;
}