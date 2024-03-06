#include <iostream>
#include <string>

using namespace std;

class person
{
public:
    string name;
    int age;
    person()
    {
        name = "Default";
        age = 0;
    }
    person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    ~person() {}
    friend ostream &operator<<(ostream &out, person &p);
    friend istream &operator>>(istream &in, person &p);
};

ostream &operator<<(ostream &out, person &p)
{
    out << p.name << " " << p.age << endl;
    return out;
}

istream &operator>>(istream &in, person &p)
{
    in >> p.name;
    in >> p.age;
    return in;
}

int main()
{
    person p;
    cin >> p;
    cout << p;

    return 0;
}