// create a class named temp that store temp in degree celsius. now create mechanism to convert basic data type degree fahrenheit into iser def data type temperature and vice versa
//  temperature{
//     celsius
// }

#include <iostream>
#include <cmath>
using namespace std;
class Temp
{
	private: float fahrenheit;
	public:Temp()
	{
		fahrenheit=0;
	}
	Temp(float celsius):fahrenheit(celsius)
	{
		fahrenheit=((celsius * static_cast<float>(9) / 5) + 32);
	}
	void show()
	{
		cout<<"The value of Temp in fahrenheit is "<<fahrenheit<<endl;
		
	}
	operator float(){
	
	return (static_cast<float>(5)/9 )* (fahrenheit - 32);
    }
	~Temp(){
	}
};
int main()
{
	float deg=49;
	Temp tempf=deg; 
	tempf.show();
	float celsius=tempf;
	cout<<"The value of Temp in celsius is " << celsius<<endl;
	return 0;
}