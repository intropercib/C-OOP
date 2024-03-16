#include <iostream>
#include <typeinfo>
using namespace std;
class dist
{
	float inch, feet;

public:
	dist() {}

	class error
	{
	};
	void setvalue(float ft, float in)
	{
		if (in >= 12.0)
			throw error();
		else
		{
			inch = in;
			feet = ft;
		}
	}

	void show()
	{
		cout << "distance is " << feet << "feet :" << inch << "inches" << endl;
	}
	~dist()
	{
	}
};
int main()
{
	float ft, in;
	cout << "enter the distance in feet and inch:";
	cin >> ft >> in;

	try
	{
		dist d1;
		d1.setvalue(ft, in);
		d1.show();
	}
	catch (dist::error e)
	{
		cerr << "inch can't be greater than 12" << endl;
	}
	return 0;
}