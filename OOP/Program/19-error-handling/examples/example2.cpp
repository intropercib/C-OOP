#include <iostream>
using namespace std;
int divide(int a, int b)
{
	if (b == 0)
		throw b;
	else
		return a / b;
}

int main()
{
	int a, b;
	char x[12];
	cout << "enter two number" << endl;
	try
	{
		cin >> a >> b;
		int z = divide(a, b);
		cout << "_________Divide____________" << endl;
		cout << "result :: " << z << endl;
	}
	catch (int a)
	{
		cout << "Can't Divide By Zero.";
	}
	return 0;
}
