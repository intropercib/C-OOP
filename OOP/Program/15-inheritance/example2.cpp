#include <iostream>
#include <string>

using namespace std;

class base
{
protected:
    string name;
    int age;

public:
    base()
    {
        name = age = 0;
    }
    base(string nam, int ag) : name(nam), age(ag){}
    void show()
    {
        cout << name << " " << age;
    }
    ~base(){}
};

class add : public base
{
private:
    string address;
    int ward;

public:
    add(string nam, int ag, string addr, int war) : base(nam, ag)
    {
        address = addr;
        ward = war;
    }
    void show()
    {
        base::show();
        cout << " "<< address << " " << ward;
    }
};

int main()
{
    add a("rrr", 12, "sss", 11);
    a.show();
    return 0;
}