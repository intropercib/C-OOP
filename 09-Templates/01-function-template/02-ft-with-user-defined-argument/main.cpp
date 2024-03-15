#include <iostream>

using namespace std;

class Addition{
	private:
		int a, b;
	
	public:
		Addition(int a, int b){
			this->a = a; this->b = b;
		}
		
		int result(){
			return a + b;
		}
		
		bool operator >(Addition add);
};

bool Addition::operator > (Addition add){
	return (this->result() > add.result()) ? true : false;
}

template <class T>

T fmax(T a, T b){
	return (a > b)? a: b;
}

int main(){
	Addition a1(5,10), a2(4,6);
	Addition a3 = fmax(a1, a2);
	cout << a3.result() << endl;
	return 0;
}
