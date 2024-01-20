
#include <iostream>
#include <cstring>

using namespace std;

class Name
{
    char *str;

public:
    Name()
    {
        str = new char[1];
        str[0] = '\0';
    }
    Name(char *nam)
    {
        int len = strlen(nam);
        str = new char[len + 1];
        strcpy(str, nam);
    }
    ~Name()
    {
        delete[] str;
    }
    void show()
    {
        cout << str << endl;
    }
    Name operator=(Name);
};
Name Name ::operator=(Name obj)
{
    int len = strlen(obj.str);
    str = new char[len + 1];
    strcpy(str, obj.str);
    return Name(str);
}

int main()
{
    Name person1("Hello");
    person1.show();
    Name person2;
    person2 = person1;
    person2.show();

    return 0;
}
