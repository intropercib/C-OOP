#include <iostream>
#include <string>

using namespace std;

class Person
{

    string name;
    int age;

public:
    Person()
    {
        name = "";
        age = 0;
    }
    Person(string fname, int getage) : name(fname), age(getage)
    {
    }

    void setvalue(string fname, int getage)
    {
        name = fname;
        age = getage;
    }
    void show()
    {
        cout << "Name ::" << name << endl;
        cout << "Age ::" << age << endl;
    }
    ~Person(){
        
    }
};

int main()
{

    Person *ptr = new Person();  // creating nameless object

    Person p1, p2("hello", 12), p3[3];
    Person *ptr = &p1;
    string name;
    int age;
    ptr->show();
    ptr = &p2;
    ptr->show();
    ptr->setvalue("hello", 122);
    ptr = &p3[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Name::";
        cin >> name;
        cout << "Age::";
        cin >> age;
        ptr->setvalue(name, age);
        ptr->show();
        delete ptr;
        
    }

    return 0;
}