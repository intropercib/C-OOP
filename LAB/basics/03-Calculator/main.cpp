#include <iostream>
using namespace std;

int main(){
    float operand1, operand2, result;
    char operat;

    while (true){

         cin >> operand1 >> operat >> operand2;

        switch (operat) {
            case '+':
                result = operand1 + operand2;
                break;
            case '-':
                result = operand1 - operand2;
                break;
            case '*':
                result = operand1 * operand2;
                break;
            case '/':
                result = operand1 / operand2;
                break;
            default:
                cout << "Invalid operator";
                break;      
        }
        cout << result << endl; 
    }
    return 0;
}