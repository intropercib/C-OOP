#include <iostream>

using namespace std;

template <typename T>

class MyClass {
    private:
        T value;
    public:
        MyClass(T x) {
            value = x;
        }

        T getValue() {
            return value;
        }
};

int main() {
    MyClass<int> myInt(10);
    cout << "Value: " << myInt.getValue() << endl;

    MyClass<string> myString("Hello, World!");
    cout << "Value: " << myString.getValue() << endl;

    return 0;
}