#include <iostream>

using namespace std;

enum data{sun,mon,tue,wed,thu,fri,sat};

int main(){
    data s = sun;
    data d = wed;
    cout <<  "index of wed is: " << d << endl;
    cout <<  "index of sun is: " << s << endl;
    return 0;
}