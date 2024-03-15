#include <iostream>

using namespace std;

template <typename T>
class MyClass {
    private:
        T value;

    public:
        MyClass(T val) : value(val) {}

        void displayValue();
};

template <typename T>
void MyClass<T>::displayValue() {
// main concept: MyClass<T>::   <--- this is the syntax to define a function outside the class template
    cout << "Value: " << value << endl;
}

int main() {
    MyClass<int> myInt(10);
    myInt.displayValue();

    MyClass<double> myDouble(20.5);
    myDouble.displayValue();

    return 0;
}