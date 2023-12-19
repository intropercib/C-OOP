#include <iostream>
#include <string>

using namespace std;

class person{
    private :string name = "Im private";
    public :string pname;
            int page;
    private : void priv_func(){
        cout << "this function actual does nothing in this program. It is an example to show this is not accessible to the other classes or function.";
    }
    public : void priv_name(){
        cout << name << endl;
    }
            void setter(string name, int age){
                pname = name;
                page = age;
            }
            void show(){
                cout << pname << " " << page ;
            }

};

int main(){

    person p;
    p.priv_name();
    p.setter( "hello", 12);
    p.show();

    return 0;

}