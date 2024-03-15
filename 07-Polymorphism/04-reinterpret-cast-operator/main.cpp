// used to convert one poniter to another pointer

#include <iostream>

using namespace std;

int main(){
    int a = 65, *iptr = &a;
    char ch = 'c', *cptr = &ch;

    cptr = reinterpret_cast<char*> (iptr);
    cout << "Value of cptr: " << *cptr << endl;
    return 0;
}