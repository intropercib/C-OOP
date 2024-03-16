#include <iostream>
#include <cmath>
#include <string>

using namespace std;

float simmple_interest(float &principal, float &rate, float &time){
    return (principal * rate * time) / 100 ;
}

float compound_interest(float &principal, float &rate, float time, float &cinterest){
    return  principal * pow(1 + rate/100/cinterest, cinterest * time);
}

int main(){
    
    float principal, rate, time, cinterest, simple_res, compound_res;
    string name;

    cout << "_______________________INTEREST CALCULATOR___________________________" << endl;
    cout << "Name :: ";
    cin  >> name;
    cout << "Principal :: ";
    cin  >> principal;
    cout << "Rate :: ";
    cin  >> rate;
    cout << "Time :: ";
    cin  >> time;
    cout << "Compounding times :: ";
    cin  >> cinterest;

    simple_res = simmple_interest(principal, rate, time);
    compound_res = compound_interest(principal, rate, time, cinterest);

    cout << "___________________________RESULT___________________________________" << endl;
    cout << "Name :: " << name << endl << "Simple interest :: " << simple_res << endl << "Compound interest :: " << compound_res << endl;

    return 0;
}