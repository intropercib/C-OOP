#include <iostream>
#include <iomanip> // necessary for setw and setfill

using namespace std;

class Test{};

int main(){
/*
    width -> total widht to be occupied to display; cout.width(14);
    fill -> fills with certain charater specified;  cout.fill('*');
    setf -> set flag 
    unsetf -> unset flag
*/

    // example

    int a;
    cout << "enter a decimal: ";
    cin >> a;

    cout.setf(ios::hex, ios::basefield);
    cout << "Hexadecimal: " << a << endl;
    
    cout.unsetf(ios::hex);
    
    cout.setf(ios::oct, ios::basefield);
    cout << "Octadecimal: " << a << endl;
    cout.unsetf(ios::oct);

    cout << "----------------" << endl;
    cout << setw(30) << setfill('*') << 69;

    return 0;
}