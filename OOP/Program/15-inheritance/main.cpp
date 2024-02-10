#include <iostream>
#include <cstring>

using namespace std;

class base
{
private:
    string name;
    int age;

public:
    string nation;
    void setvalue(string nam, int ag, string nat)
    {
        name = nam;
        age = ag;
        nation = nat;
    }
    void show()
    {
        cout << name << " " << age << " " << nation << endl;
    }
};
class der : private base
{ // all the possible in herit method or member are public, private, protected based on the mentioned in derived class
private:
    string school;

public:
    void set(string nam, int ag, string nat, string sch)
    {
        // name = nam;   // name and age are private so no inherit
        // age  = ag;
        // nation = nat; // public so inherit
        setvalue(nam, ag,  nat);
        school = sch;
    }
    void show_der()
    {
        show();
        cout << school << endl;
    }
};

int main()
{

    der d;
    d.set("hello", 10, "un", "no");
    d.show_der();

    return 0;
}