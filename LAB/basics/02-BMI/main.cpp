#include <iostream>
#include <string>
using namespace std;


float BMI(float weight, float height){
    return (weight/((height * 0.3048) * height));
}

int main(){
    int age;
    float weight, height, result;
    string name, report;

    cout << "___________________BMI-CALCULATOR________________________" << endl;
    cout << "Name ::";
    cin  >> name;
    cout << "Age ::";
    cin  >> age;
    cout << "Weight (kg) ::";
    cin  >> weight;
    cout << "Height (ft.) ::";
    cin  >> height;

    result = BMI(weight, height);
    if (result <= 18.5)
        report = "Underweight";
    else if (result <= 24.9)
        report = "Healthyweight";
    else if (result <= 29.9)
        report = "Overweight";
    else
        report = "Obese";

    cout << "_______________________RESULT____________________________" << endl;
    cout << "BMI is " << result << endl << "Report ::" << report << endl;
    cout << "_________________________________________________________" << endl;

    

}