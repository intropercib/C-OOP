
#include <iostream>
#include <stdexcept>

using namespace std;

int main(){
    float a;

    cout << "Number ::" ;
    try{
        cin >> a;
        if(cin.fail()){
            throw invalid_argument("Not a number");
        }
    }
    catch(exception& e){
        cout << e.what() << endl;
    }

    return 0;
}
