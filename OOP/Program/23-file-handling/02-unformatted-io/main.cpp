#include <iostream>

using namespace std;

int main(){
    char ch;
    char str[30];

    cin.get(ch); // takes char only (not string)
    cout.put(ch);

    cin.ignore();
    cout << endl;
    
    cin.getline(str, 10);
    cout.write(str, 10);

    return 0;
}