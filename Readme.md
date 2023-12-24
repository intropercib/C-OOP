# Learn C++ Programming <span style="position :absolute ; margin-left:3%;bottom:4%;"><img src="https://isocpp.org/assets/images/cpp_logo.png" alt="logo" width="52px" height="52px"></span>



Welcome to the "Learn C++ Programming" repository! This repository is designed to help you master C++ programming, starting from the basics and progressing to advanced topics.

# Table of Contents

1. [Introduction](#introduction)
2. [Basic Programs]()
    - [Hello world](#01-hello-world)
    - [BMI Calculator](#02-bmi-calculator)
    - [Simple Calculator](#03-simple-calculator)
    - [Simple and compound interest](#04-simple-and-compound-interest)
    - [Temperature Conversion](#05-temperature-conversion)
    - [Function Overloading](#06-function-overloading)
    - [Dynamic Area](#07-dynamic-area)
    - [Pass by Reference](#08-pass-by-reference)
    - [Dynamic Memory Allocation](#09-dynamic-memory-allocation)
    - [DMA Array](#10-dma-array)
    - [DMA Structure](#11-dma-structure)
3. [Object Oriented Programming]()
    - [Class Structure](#1-class-structure)
    - [Basic Calculator](#2-basic-calculator)
    - [Student Report](#3-student-report)
    - [Function Scope](#4-function-scope)
    - [Getter Setter](#5-getter-setter)


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

## 04. Simple and Compound Interest
The program displays the calculated simple interest and compound interest based on the provided inputs.

```cpp
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
```

## 05. Temperature Conversion
This C++ program serves as a simple temperature converter, allowing users to convert temperatures between Fahrenheit and Celsius. The user can choose the desired conversion operation by entering a choice (1 for Fahrenheit to Celsius, 2 for Celsius to Fahrenheit) and providing the temperature value.

```cpp
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

```


## 06. Function Overloading
- Function overloading is a feature in many programming languages that allows a single function name to represent multiple functions with different parameter lists. In other words, multiple functions within the same scope can share the same name, but they must have different parameter types, number of parameters, or order of parameters.
- Function overloading is a form of compile-time polymorphism, also known as static polymorphism or early binding. The appropriate function to call is determined by the compiler based on the function signature.

```cpp
#include <iostream>
// when a same function repeats by varing the types of arguments or the number of arguments of both :: function overloading

using namespace std;

int sum(int a){
    cout << "Single Arguments" << endl;
    return a + a;
}
int sum(int a, int b){
    cout << "Double Arguments" << endl;
    return a + b;
}
int sum(int a, int b, int c){
    cout << "More than two Arguments" << endl;
    return a + b + c;
}

int main(){
    cout << "Addition" << endl;

    int a = 5, b = 15, c =5;
    cout << sum(a) << endl;
    cout << sum(a, b) << endl;
    cout << sum(a, b, c) << endl;

    return 0 ;
  
}
```


## 07. Dynamic Area
This program gives you the application of function overloading. Functions is being called on the basis of number and types of arguments.
```cpp
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

```

## 08. Pass By Reference
In C++, passing by reference allows a function to modify the value of a variable in the calling function directly. Using pass by reference allows the 'set' function to directly modify the value of the variable 'x' in the main function. The key point is that you are working with the same memory location, not a copy of the variable.

```cpp
#include <iostream>
using namespace std;

int& set(int &c){
    return c;
}

int main(){
    int x;
    set(x) = 30;
    cout << x;
}
```

## 09. Dynamic Memory Allocation
Dynamic memory allocation in C++ allows you to allocate memory at runtime using the new operator. This is useful when you need memory that persists beyond the scope of a function or when you need to allocate memory for an array whose size is not known until runtime. Dynamic memory allocation involves using pointers to manage memory. Here are the key concepts:

 1. Allocating Memory
 - Single Variable
    - To allocate memory for a single variable, you use the new operator.
    ```cpp
    int *ptr = new int; // Allocates memory for a single integer
    ```

- Array
  - To allocate memory for an array, you use the new operator with square brackets.
   ```cpp
    int *arr = new int[10]; // Allocates memory for an array of     10 integers
  ```
2. Deleting Allocated Memory
- Single Variable
    - To release memory allocated for a single variable, you use the delete operator.
   ```cpp
    delete ptr; // Releases memory for a single integer
  ```
- Array
    - To release memory allocated for an array, you use the delete[] operator.
   ```cpp
   delete[] arr; // Releases memory for an array of integers
  ```

## 10. DMA Array
This C++ program demonstrates dynamic memory allocation to create an array of user-defined size. The program provides a simple example of dynamic memory usage for arrays, offering flexibility in array size based on user input.
```cpp
#include <iostream>

using namespace std;

int main(){
    int i, n;
    cout << "Enter the size of array :: ";
    cin  >> n;
    int *arr = new int[n];

    for (i = 0; i< n; i++){
        cout << "Enter the element of array:: " ;
        cin  >> arr[i];
    }

    cout << "Array you have entered:: " << endl;
    for (i = 0; i< n; i++){
        cout << arr[i];
    }

    delete []arr;
    return 0;   
}
```
## 11. DMA Structure
This code snippet demonstrates the use of dynamic memory allocation for a structure, allowing flexibility in creating instances of the person structure with user-defined attributes.
```cpp
#include <iostream>
#include <string>
using namespace std;

struct person{
    string name;
    int age;
    char gender;
};

int main(){
    
    person *p1 = new person();
    cout << "Enter name :: ";
    cin  >> p1 -> name;
    cout << "Enter age :: ";
    cin  >> p1 -> age;s
    cout << "Enter gender :: ";
    cin  >> p1 -> gender;

    cout << "______________________RESULT__________________________\n";
    cout << "Name is " << (*p1).name << "." << " Age is " << (*p1).age << "." << " Gender is " << (*p1).gender << "." << endl;

    delete p1;
    return 0;
}
```

# Object Oriented Programming

## Class

## 01. Class Setup
This give a insight on the structure of class in c++ programming.Implicitly the class method along with the class attribute are private. If we want to access those then we have to make it explicitly public. The function becomes inline on where called.
```cpp
#include <iostream>
#include <string>

using namespace std;

class person{
    private :string name = "Im private";
    public :string pname;
            int page;
    private : void priv_func(){
        cout << "this function actual does nothing in this program. It is an example to show this is not accessible to the other classes or function.";
    }
    public : void priv_name(){
        cout << name << endl;
    }
            void setter(string name, int age){
                pname = name;
                page = age;
            }
            void show(){
                cout << pname << " " << page ;
            }

};

int main(){

    person p;
    p.priv_name();
    p.setter( "hello", 12);
    p.show();

    return 0;

}
```

## 02.Basic Calculator
This program shows the applicable use of class method and attributes.
```cpp
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
```

## 03. Student Report
In this program we take the user input and pass those value to our defined class. On the basis of method defined on class is used to calculate the logical part of the program.
```cpp

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Student
{   int count = 0;
    float total, percent;
    string report;
    string fname, lname, rollno; 
    

    public : int getter(string First_name, string Last_name, string roll){
        fname = First_name;
        lname = Last_name;
        rollno = roll;
    }
    public : int setncal(float marks[]){
         for (int i = 0; i < 5; i++) {
            total += marks[i];
            if (marks[i] < 32)
                count ++;
        }
        (count == 0)? report ="PASS \nCONGRATULAtION " : report = "Fail \nBETTER LUCK NEXT TIME";
        percent = (float(total) / 500.0) * 100; 
    }
    public : void result(){
        cout << "___________________________________RESULT______________________________________\n" << endl;
        cout << "Name :: " << fname << " " << lname << "\nRoll no :: "<< rollno << "\nTotal :: " << total << "\nPercentage :: " << percent << "% "<<"\nReport :: " << report << endl; 
    }
    
    


};

int main()
    
{ 

    Student s1; 
    string fname, lname, roll;
    string sub[] = {"MATHEMATICS", "MICROPROCESSOR", "OOP", "ECM", "CHEMISTRY"};
    int i;
    float *marks = new float[5];

    cout << "_________________________________Student Detail___________________________________\n"<< endl;
    cout << "Fisrt Name :: ";
    cin >> fname;
    cout << "Last Name :: ";
    cin >> lname;
    cout << "Roll No :: ";
    cin >> roll;
    s1.getter(fname, lname, roll);


    for (int i = 0; i < 5; i++)
    {
        do
        {
            cout << "Marks obtained in " << sub[i] << " :: ";
            cin >> marks[i];

            if (marks[i] < 0 || marks[i] > 100)
            {
                cout << "Invalid marks!" << endl;
            }
        } while (marks[i] < 0 || marks[i] > 100);
    }
    s1.setncal(marks);
    s1.result();

    return 0;
}
```

## 04. Function Scope
A write function for a class can be defined outside the class as a global function using the scope resolution operator (::). This operator allows the function to access the members of the class without being a member itself.

```cpp
#include <iostream>

using namespace std;

class display{

    public : void show(){
        cout << "Hello World" << endl;

    }
    public : void wish();
};

void display :: wish(){
    cout << "Merry Christmas." << endl;
};

int main(){

    display d;
    d.show();
    d.wish();

    return 0;
}
```
## 05. Getter Setter
It gives the concept of encapsulation in c++.
  ### Destructor
To deallocate the memory of object the destructor is used. Just like any other block of funtion it is also a function the only difference is it the loggic inside that function is destroy the object created. On the completion of function execution this set gets executed. Since the object is stored in stack, the last objects gets destroyed first. The object created don't gets destroyed implicitly.

```cpp
~(classname or constructor)(){
// to be executed on deletion of object
// not compulsory to destry the object created
}
```

Example : 

```cpp
#include <iostream>

using namespace std;

class GetSet{

    int val = 0 ;

    GetSet(){
        cout << "Value ::" << val << endl;
    }
    public :void  get(){
        cout << "Value ::" << val;
    }
    public :void  set(int value){
        val = value;
    }
};

int main(){
    GetSet a;

    a.set(12);
    a.get();
}
```












