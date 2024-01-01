#include <iostream>

using namespace std;

// scope is local
// life span is global
// initialization is done outside of class;
//  static function and static vaiable
//  funciton belongs to only class and no object is required

class Happy{

    public : void fun1(){
        cout << "function 1" << endl;
        count ++;
    }
    public : void fun2(){
        cout << "function 2" << endl;
        count ++;
    }
    static void show_count(){
        cout << count << endl ;
    }
    static int count;
    
};
int Happy :: count = 0;

int main(){
    Happy h1;
    h1.fun1();
    h1.fun2();
    h1.show_count(); // not appropriate
    Happy::show_count();  //appropriate
    return 0;
}