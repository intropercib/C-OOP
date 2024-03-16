#include <iostream>
#include <string>

using namespace std;

struct person{
    string name;
    int age;
    char gender;
};

int main(){
    
    person *p1 = new person();
    cout << "Enter name :: ";
    cin  >> p1 -> name;
    cout << "Enter age :: ";
    cin  >> p1 -> age;
    cout << "Enter gender :: ";
    cin  >> p1 -> gender;

    cout << "______________________RESULT__________________________\n";
    cout << "Name is " << (*p1).name << "." << " Age is " << (*p1).age << "." << " Gender is " << (*p1).gender << "." << endl;

    delete p1;
    return 0;
}