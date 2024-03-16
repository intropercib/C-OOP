#include <iostream>
using namespace std;

class calculator{

    float result;

    public: void add(float num1, float num2){
        result = num1 + num2 ;
    }
    public: void sub(float num1, float num2){
        result = num1 - num2 ;
    }
    public: void mul(float num1, float num2){
        result = num1 * num2 ;
    }
    public: void div(float num1, float num2){
        result = num1 / num2 ;
    }
    public : float show(){
        return result;
    }

};

int main(){
    calculator calc;
    float operand1, operand2 ,result;
    char operat;
    cout << "_______________________CALCULATOR______________________"<< endl;
    while(true){
        cin  >> operand1 >> operat >> operand2;
        switch (operat) {
            case '+':
                calc.add(operand1, operand2);
                break;
            case '-':
                calc.sub(operand1, operand2);
                break;
            case '*':
                calc.mul(operand1, operand2);
                break;
            case '/':
                calc.div(operand1, operand2);
                break;
            default:
                cout << "Invalid operator";
                break;      
        }
        result = calc.show();
        cout << result << endl;
    }

    return 0;
}