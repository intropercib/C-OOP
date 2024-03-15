#include <iostream>

using namespace std;

template <class T, int size>

class Example{
    private:
        T variable[size];
    
    public:
        Example(){
            for(int i = 0; i < size; i++){
                cout << "Enter number: ";
                cin >> variable[i];
            }
        }

        T fmax();
};

template <class T, int size>
T Example<T,size>::fmax(){
    T max = variable[0];
    for (int i = 1; i < size; i ++){
        if (max < variable[i]){
            max = variable[i];
        }
    }
    return max;
}

int main(){
    Example<int, 6> a1, a2;
    cout << "A1's max is: " << a1.fmax() << endl;
    cout << "A2's max is: " << a2.fmax();
    return 0;
}