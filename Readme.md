# Learn C++ Programming <span style="position :absolute ; margin-left:3%;bottom:4%;"><img src="https://isocpp.org/assets/images/cpp_logo.png" alt="logo" width="52px" height="52px"></span>

Welcome to the "Learn C++ Programming" repository! This repository is designed to help you master C++ programming, starting from the basics and progressing to advanced topics.

# Table of Contents

1. [Introduction](#introduction)
2. [Programs]()
    - [Hello world](#01-hello-world)
    - [BMI Calculator](#02-bmi-calculator)
    - [Simple Calculator](#03-simple-calculator)
    - [Simple and compound interest](#04-simple-and-compound-interest)
    - [Temperature Conversion](#05-temperature-conversion)
    - [Function Overloading](#06-function-overloading)
    - [Dynamic Area](#07-dynamic-area)
    - [Pass by Reference](#08-pass-by-reference)
    - [DMA Array](#09-dma-array)
    - [DMA Structure](#10-dma-structure)


# Introduction

C++ is a powerful and versatile programming language widely used in software development. Whether you're a beginner or an experienced programmer, this repository aims to provide a comprehensive guide to learning C++.

# Getting Started

## 01. Hello World
Understanding the structure of a complete program in c++.

```cpp
#include <iostream>
using namespace std;

int main(){

    cout << "Hello world";
    return 0;
    
}
```
## 02. BMI Calculator
Taking the inputs height and weight from the user and calculating the bmi of a person and differntiate its category using if-else statement. Mainly this program helps you understand the real life application of if-else statements.

```cpp
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
```
## 03. Simple Calculator
Simple program to operate two number. It is a simple terminal calculator applying switch operator.

```cpp
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
```



