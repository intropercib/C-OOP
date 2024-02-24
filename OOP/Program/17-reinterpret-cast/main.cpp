#include <iostream>

using namespace std;

int main(){
	
	int x = 65;
	cout << x << endl;
	char *c = reinterpret_cast<char*>(&x);
	cout << *c << endl;
	
	return 0;
}
