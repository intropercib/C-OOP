
#include <iostream>

using namespace std;

class shape{  //Abstract Class
	public:
		void virtual draw()=0;
		/* Pure Virtual Function -> Obj is not created from base virtual class*/
};

class circle:public shape{
	public:
		void draw(){
			cout << "CIRCLE" << endl;
		}
};

class rectangle:public shape{
	public:
		void draw(){
			cout << "RECTANGLE" << endl;
		}
};

class triangle: public shape{
	public:
		void draw(){
			cout << "TRIANGLE" << endl;
		}
};

int main(){
	
//	shape *s = new shape();  // error obj cant't be created from base since virtual function
//	s->draw();
	
	shape *s = new circle();
	s -> draw();
	
	s = new rectangle();
	s -> draw();
	
	s = new triangle();
	s -> draw();
	
	return 0;
}


