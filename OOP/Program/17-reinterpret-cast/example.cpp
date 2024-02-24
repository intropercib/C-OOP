#include <iostream>
#include <typeinfo>

using namespace std;

class base
{
public:
    void show()
    {
        cout << "base class" << endl;
    }
};
class der : public base
{
public:
    void show()
    {
        cout << "derived class" << endl;
    }
};

int main()
{

    // base b;
    // der d;
    // int x = 10;
    // float y = 11;
    // cout << typeid(b).name() << endl;
    // cout << typeid(x).name() << endl;
    // cout << typeid(y).name() << endl;
    der d;
    base *b = &d; // base *b = new der;  complile // runtime
    // base *b = dynamic_cast<base*>(&d);
    if (b)
    {
        b->show();
    }
    else
    {
        cout << "cast unsuccessful" << endl;
    }

    return 0;
}