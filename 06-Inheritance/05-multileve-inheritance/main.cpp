#include <iostream>

using namespace std;

class person{
    protected:
        string name;
        int age;
    
    person(string n, int a){
        name = n; age = a;
    }
};

class student: protected person{
    protected:
        int roll;
    
    student(string n, int a, int r): person(n, a){
        roll = r;
    }
};

class result: protected student{
    protected:
        int score;
    
    public:
        result(string n, int a, int r, int s):student(n, a, r){
            score = s;
        }

        void show(){
            cout << "Name: " << name << endl; 
            cout << "Age: " << age << endl;
            cout << "Roll No: " << roll << endl;
            cout << "Score: " << score << endl;

        }
};

int main(){

    result r("sakar", 20, 16, 90);
    r.show();
    return 0;
}