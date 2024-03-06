#include <iostream>
#include <fstream>


using namespace std;

int main()
{   
    ofstream file;
    file.open("data.txt",ios::app);
    char x[20];
    int age;
    cout << "Name ::";
    cin.getline(x,20);
    cout << "Age ::";
    cin >> age;
    file << x << " " << age << endl;
    

    return 0;
}