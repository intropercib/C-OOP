#include <iostream>
#include <cmath>

using namespace std;
class cartesian;
class polar;

class polar
{
    float radius;
    float angle;

public:
    polar()
    {
        radius = angle = 0;
    }
    polar(float r1, float a1) : radius(r1), angle(a1)
    {
    }
    void show()
    {
        cout << "Polar radius:: " << radius << "\nPolar angle :: " << angle << endl;
    }
    ~polar()
    {
    }
    friend class cartesian;
};

class cartesian
{
    float x;
    float y;

public:
    cartesian()
    {
        x = y = 0;
    }
    cartesian(float x1, float y1) : x(x1), y(y1)
    {
    }
    void show()
    {
        cout << "Cartesian x :: " << x << "\nC`artesian y :: " << y << endl;
    }
    ~cartesian()
    {
    }
    cartesian(polar p)
    {
        // float a = p.getangle();
        // float r = p.getrrrad();
        x = p.radius * cos(p.angle);
        y = p.radius * sin(p.angle);
    }
};

int main()
{
    polar po(1, 45);
    cartesian ca = po;
    po.show();
    ca.show();
    return 0;
}