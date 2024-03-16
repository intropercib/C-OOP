#include <iostream>
#include <cmath>
#include <string>

using namespace std;

float area (float r){
    return 3.14 * pow(r, 2);
}

float area (float l, float b){
    return l * b;
}

float area (float a, float b, float c){
    float s;
    s = ( a + b + c)/2;
    return sqrt( s * ( s - a) * ( s - b) * ( s - c));
}

int main (){

    float  r, x, y, z, l, b, result;
    int choice ;
    string areaof = "";

    cout << "__________________AREA__________________________" << endl;

    cout << " 1.Circle \n 2.Rectangle \n 3.Triangle \n :: ";
    cin >> choice;

    switch (choice){

        case 1:
            cout << "Radius :: ";
            cin  >> r ;
            result = area(r);
            areaof = "circle";
            break;

        case 2:
            cout << "Length :: ";
            cin  >> l ;
            cout << "Breadth :: ";
            cin  >> b ;
            result = area(l, b);
            areaof = "rectangle";
            break;

        case 3:
            cout << "Side 1 :: ";
            cin  >> x ;
            cout << "Side 2 :: ";
            cin  >> y ;
            cout << "Side 3 :: ";
            cin  >> z ;
            result = area(x, y, z);
            areaof = "triangle";
            break;

        default:
            cout << "Invalid option" << endl;
            break;

    }
    cout << "_________________________________________________" << endl;
    cout << "Area of "<< areaof << " is " << result << endl;


}

