#include <iostream>
#include <string>

using namespace std;

class registration
{
private:
    int age;
    string name;

public:
    class name_error
    {
    public:
        string msg;
        name_error(string m) { msg = m; }
        ~name_error() {}
    };

    class age_error
    {
    public:
        string msg;
        age_error(string m) { msg = m; }
        ~age_error() {}
    };

    registration()
    {
        name = "default";
        age = 0;
    }

    registration(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void setval(string name, int age)
    {
        if (name.length() < 4)
        {
            throw name_error("Name should be greater than 4 char");
        }

        if (age <= 16 || age >= 36)
        {
            throw age_error("Age is invalid. Age must be between 16 and 36");
        }

        this->name = name;
        this->age = age;
    }

    void show()
    {
        cout << "!!! CONGRATULATIONS !!! " << endl;
        cout << name << "\t" << age << endl;
    }

    ~registration() {}
};

int main()
{
    registration r;
    string name;
    int age;

    try
    {
        cout << "Enter your name :: ";
        cin >> name;
        cout << "Enter your age :: ";
        cin >> age;
        r.setval(name, age);
        r.show();
    }
    catch (registration::name_error e)
    {
        cout << e.msg << endl;
    }
    catch (registration::age_error e)
    {
        cout << e.msg << endl;
    }

    return 0;
}
