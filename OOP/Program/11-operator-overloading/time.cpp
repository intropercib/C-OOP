#include <iostream>
#include <string>

using namespace std;

class Time
{
    int sec, min, hr;

public:
    Time(int h, int m, int s)
    {
        sec = s;
        min = m;
        hr = h;
    }
    void setValue(int h, int m, int s)
    {
        sec = s;
        min = m;
        hr = h;
    }
    void show()
    {
        cout << hr << ":" << min << ":" << sec;
    }

    Time operator++()
    {
        ++sec;
        ++min;
        ++hr;
        return Time(hr, min, sec);
    };
    Time operator++(int)
    {
        sec++;
        min++;
        hr++;
        return Time(hr, min, sec);
    };
};

int main()
{
    Time t1(2, 3, 4);
    ++t1;
    cout << "Pre increment:";
    t1.show();
    cout << endl;
    t1++;
    cout << "Post increment:";
    t1.show();
    cout << endl;
    return 0;
}