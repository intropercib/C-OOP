
#include <iostream>

using namespace std;

int main(){
    int i, n;
    cout << "Enter the size of array :: ";
    cin  >> n;
    int *arr = new int[n];

    for (i = 0; i< n; i++){
        cout << "Enter the element of array:: " ;
        cin  >> arr[i];
    }

    cout << "Array you have entered:: " << endl;
    for (i = 0; i< n; i++){
        cout << arr[i];
    }

    delete []arr;
    return 0;
    
}