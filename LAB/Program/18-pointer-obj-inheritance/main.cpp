
#include<iostream>

using namespace std;

class base{   //base class
	public:
		void show(){
			cout << "base class" << endl;
		}
};

class der: public base{  //derived class
	public:
		void show(){
			cout << "derived class" << endl;
		}
};

int main(){
//	use of pointer object in inheritance
	base *b = new base();
	b->show();  //content of b
	
	der *d = new der();
	d->show(); //content of d
	
	/* der *d = new base();   //error can't be access from der to base
	d->show();  */
	
	base *b1 = new der();
	b1->show(); //can be access from base to der 
}