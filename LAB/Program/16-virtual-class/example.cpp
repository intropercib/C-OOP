
#include <iostream>

using namespace std;

class shape{
	public:
		void virtual draw(){   //check main for virtual(True) || virtual(False)
			cout << "SHAPE" << endl;
		}
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
	
	shape *s = new shape(); 
	s->draw();
	
	s= new circle(); //if not virtual function -> check of content(False)
	s->draw();		 //if virtual function -> check of content(True)
	
	s= new rectangle();
	s->draw();
	
	s= new triangle();
	s->draw();
	
	return 0;
}
