#include <iostream>

using namespace std;

template <class T>
class intFinder{
    public:
        intFinder(T a){
            cout << a << " is not a valid int" << endl;
        }
};

template <>
class intFinder<int>{
    public:
        intFinder(int a){
            cout << a << " is a valid int" << endl;
        }
};

int main(){
    intFinder<char> a1('c');
    intFinder<float> a2(2.9);
    intFinder<int> a3(2);
    return 0;
}