#include <iostream>
#include <string>

using namespace std;

float F_conversion( float temp){
    return ((temp * static_cast<float>(9) / 5) + 32);
}

float C_conversion( float temp){
    return (static_cast<float>(5)/9 )* (temp - 32) ;

}

int main(){

    float temp, res;
    int choice;
    string degree;

    cout << "________________TEMPERATURE-CONVERTER______________________" << endl;
    cout << " Choose operation \n \t 1.-->F \n \t 2.-->C \n :: ";
    cin  >> choice;
    cout << "Temperature :: ";
    cin  >> temp;

    switch (choice){
     
        case 1:
            res = F_conversion(temp);
            degree = "F";
            break;
      
        case 2:
            res = C_conversion(temp);
            degree = "C";
            break;
       
        default:
            cout << "Invalid Operation.";
            return 0;

    }
    cout << "______________________RESULT__________________________" << endl;
    cout << "Temperature is " << res <<" " << degree << endl;
    return 0;
 

}
