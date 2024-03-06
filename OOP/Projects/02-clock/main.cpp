#include <iostream>
#include <Windows.h>

using namespace std;

class Clock
{
    int hours, minutes, seconds;

public:
    Clock() : hours(0), minutes(0), seconds(0) {}
    Clock(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}
    void settime(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }
    void showtime()
    {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
    void tick()
    {
        seconds++;
        if (seconds == 60)
        {
            seconds = 0;
            minutes++;
            if (minutes == 60)
            {
                minutes = 0;
                hours++;
                if (hours == 24)
                {
                    hours = 0;
                }
            }
        }
    }
};
int main()
{
    Clock c;
    int h, m, s;
    cout << "Enter hour :: ";
    cin >> h;
    cin.ignore();
    cout << "Enter minute :: ";
    cin >> m;
    cin.ignore();
    cout << "Enter seconnds :: ";
    cin >> s;
    c.settime(h, m, s);
    while (true)
    {
        c.showtime();
        c.tick();
        Sleep(1000);
        system("cls");
    }

    return 0;
}