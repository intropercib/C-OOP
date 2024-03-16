#include <iostream>
#include <cstring>

using namespace std;

class concat
{
    char *str;

public:
    concat()
    {
        str = new char[1];
        str[0] = '\0';
    }
    concat(char *nam)
    {
        int len = strlen(nam);
        str = new char[len + 1];
        strcpy(str, nam);
    }
    void show()
    {
        cout << "name is: " << str << endl;
    }
    ~concat() {}
    concat operator+(concat obj)
    {
        int len = strlen(obj.str) + strlen(this->str);
        char *temp = new char[len + 1];
        strcpy(temp, this->str);
        strcat(temp, obj.str);
        str = new char[len + 1];
        strcpy(str, temp);
        return *this;
    }
    // friend concat operator +(concat obj1, concat obj2){
    //     int len = strlen(obj1.str) + strlen(obj2.str);
    //     char *temp = new char[len + 1];
    //     strcpy(temp, obj2.str);
    //     strcat(temp,obj1.str);
    //     obj2.str = new char[len + 1];
    //     strcpy(obj2.str,temp);
    //     return obj2;
    // }
};

int main()
{
    concat person1("sita"), person2("ram"), person3;
    person3 = person1 + person2;
    person3.show();
}