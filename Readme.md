# Learn C++ Programming <span style="position :absolute ; margin-left:3%;bottom:4%; scroll-behaviour :smooth "><img src="https://isocpp.org/assets/images/cpp_logo.png" alt="logo" width="52px" height="52px"></span>

Welcome to the "Learn C++ Programming" repository! This repository is designed to help you master C++ programming, starting from the basics and progressing to advanced topics.

# Table of Contents

## 1. [Introduction](#introduction)

## 2. [Basic Programs](#basic-programs)

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

## 3. [Object Oriented Programming](#object-oriented-programming)

### [Programs]()

- [Class Structure](#01-class-setup)
- [Basic Calculator](#02basic-calculator)
- [Student Report](#03-student-report)
- [Function Scope](#04-function-scope)
- [Getter Setter](#05-getter-setter)
- [Constructor](#06-constructor)
- [Pointer object](#07-pointer-object)
- [Scope of variable](#08-scope-of-variable)
- [Static variable and function](#09-static-variable-and-function)
- [More on constructor destructor and 'this' operator](#10-more-on-constructor-destructor-and-this-operator)
- [Operator overloading](#11-operator-overloading)
- [Assignment operator oveloading](#12-assignment-operator-overloading)
- [Comparator operator overloading](#13-comparing-operator-overloading)
- [Data conversion](#14-data-conversion)
- [Inheritance](#15-inheritance)
- [Virtual Function and Abstrace Class](#16-virtual-function-and-abstract-class)
- [Reinterpret Casting](#17-reinterpret-casting)
- [Pointer Object in Inheritace](#18-pointer-object-in-inheritance)
- [Error Handling](#19-error-handling)
- [Rethrow and Catch Error](#20-rethrow-and-catch-error)
- [Templates](#21-templates)
- [Insertion and Extraction Operator Overloading](#22insertion-and-extraction-operator-overloading)
- [File Handling](#23-file-handling)
- [Standard Template Library (STL)](#24-standard-template-library-stl)

# Introduction

C++ is a powerful and versatile programming language widely used in software development. Whether you're a beginner or an experienced programmer, this repository aims to provide a comprehensive guide to learning C++.

# Getting Started

## Basic Programs

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

1.  Allocating Memory

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

Object-Oriented Programming (OOP) is a programming paradigm that revolves around the concept of objects, encapsulation, inheritance, and polymorphism. Here are key features of OOP:

### 01. Class

A class is a blueprint for creating objects in object-oriented programming. It defines the properties (attributes) and behaviors (methods) that objects of the class will have. For example, a 'Car' class may have attributes like 'color' and 'model' and methods like 'start' and 'stop'.

### 02. Object

An object is an instance of a class. It represents a real-world entity and encapsulates data and functionality. For instance, an object of the 'Car' class could be a specific car with a particular color and model, capable of starting and stopping.

### 03. Encapsulation

Encapsulation is the bundling of data and methods that operate on that data within a class, restricting direct access from outside the class. It promotes data hiding, security, and modularity. For instance, private attributes of a BankAccount class can be encapsulated, allowing controlled access through methods like 'deposit' and 'withdraw'.

### 04. Polymorphism

Polymorphism allows objects of different classes to be treated as objects of a common base class. It enables flexibility and extensibility by supporting a single interface for different types. For example, both a 'Circle' and a 'Square' class may have a common method 'calculateArea', exhibiting polymorphic behavior.

### 05. Inheritance

Inheritance is a mechanism that allows a class to inherit properties and behaviors from another class. It promotes code reuse and the creation of class hierarchies. For instance, a 'Manager' class inheriting from an 'Employee' class can reuse common attributes and methods.

### 06. Abstraction

Abstraction involves simplifying complex systems by modeling classes based on essential features, ignoring unnecessary details. It provides a high-level view of objects and their interactions. For example, an 'Animal' class can be abstract, with subclasses like 'Dog' and 'Cat' providing specific implementations.

Illustration of above mentioned concepts.

```cpp
#include <iostream>
using namespace std;

// Class and Object
class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape." << endl;
    }
};

// Encapsulation
class BankAccount {
private:
    double balance;

public:
    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient funds." << endl;
        }
    }
};

// Polymorphism
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle." << endl;
    }
};

// Inheritance
class Manager : public BankAccount {
public:
    void approveLoan(double amount) {
        deposit(amount);  // Inherits deposit method from BankAccount
        cout << "Loan approved." << endl;
    }
};

// Abstraction
class Animal {
public:
    virtual void makeSound() = 0;  // Pure virtual function for abstraction
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Woof!" << endl;
    }
};

int main() {
    // Object
    BankAccount account;
    account.deposit(1000);
    account.withdraw(500);

    // Polymorphism
    Shape* shape = new Circle();
    shape->draw();

    // Inheritance
    Manager manager;
    manager.approveLoan(1000);

    // Abstraction
    Animal* dog = new Dog();
    dog->makeSound();

    return 0;
}
```

We will learn more on depth of each topic from basic to advance.

## Program

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

## 06. Constructor

```cpp
#include <iostream>

using namespace std;

class dist
{
    float inch, feet;

public:
    dist()
    {
        feet = inch = 0;
        // default constructor
    }
    dist(float ft, float in) : feet(ft), inch(in)
    {
    }
    dist(dist &d);
    void add(dist);
    void add(dist, dist);
    void show()
    {
        cout << feet << "::" << inch << endl;
    }
    friend void add(dist, dist);
};

dist::dist(dist &d)
{
    feet = d.feet;
    inch = d.inch;
}
void dist::add(dist d)
{
    feet += d.feet;
    inch += d.inch;
    // without return type
}
void dist::add(dist x, dist y)
{
    feet = x.feet + y.feet;
    inch = x.inch + y.inch;
}
void add(dist x, dist y){
    float feet = x.feet + y.feet;
    float inch = x.inch + y.inch;
    cout << feet <<":" << inch << endl;
}
int main()
{
    dist d1(2, 3), d2(3, 4), d3;
    d1.show();
    d2.show();
    cout << "______________" << endl;
    d1.add(d2);
    d1.show();
    cout << "______________" << endl;
    d3.show();
    cout << "______________" << endl;
    cout << "______________" << endl;
    d1.show();
    d2.show();
    cout << "______________" << endl;
    d3.add(d1, d2);
    d3.show();
    cout << "______________" << endl;
    cout << "______________" << endl;
    d1.show();
    d2.show();
    cout << "______________" << endl;
    add(d1, d2);

    return 0;
}
```

## 07. Pointer Object

```cpp
#include <iostream>
#include <string>

using namespace std;

class Person
{

    string name;
    int age;

public:
    Person()
    {
        name = "";
        age = 0;
    }
    Person(string fname, int getage) : name(fname), age(getage)
    {
    }

    void setvalue(string fname, int getage)
    {
        name = fname;
        age = getage;
    }
    void show()
    {
        cout << "Name ::" << name << endl;
        cout << "Age ::" << age << endl;
    }
    ~Person(){

    }
};

int main()
{

    Person *ptr = new Person();  // creating nameless object

    Person p1, p2("hello", 12), p3[3];
    Person *ptr = &p1;
    string name;
    int age;
    ptr->show();
    ptr = &p2;
    ptr->show();
    ptr->setvalue("hello", 122);
    ptr = &p3[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Name::";
        cin >> name;
        cout << "Age::";
        cin >> age;
        ptr->setvalue(name, age);
        ptr->show();
        delete ptr;

    }

    return 0;
}
```

## 08. Scope of Variable

The scope of variable x is local and variable y is global. Keyword static help to define variable globally. So, variable y is not destroyed until the entire program terminates. Similarly variable x destroys as soon as the function "display" terminates.

```cpp
#include <iostream>

using namespace std;

int display(){
    int x = 0;
    static int y = 0;
    x++;
    y++;
    cout << "X :: " << x << "\tY :: " << y << endl;
}

int main(){
    display();
    display();
    display();
    display();
    display();

    return 0;
}
```

## 09. Static variable and function

For declaration of static variable in class

```cpp
class classname{
    static int var_name; // declare the static variable inside the class
};
```

For initialization of variable

```cpp
int classname :: var_name; // initialize the static variable outside the class
```

It's better practice to make a static function to access the static variable. The static function belongs to only class and no object is required. Scope of static variable is local but the life span is global.

```cpp
#include <iostream>

using namespace std;

class Happy{

    public : void fun1(){
        cout << "function 1" << endl;
        count ++;
    }
    public : void fun2(){
        cout << "function 2" << endl;
        count ++;
    }
    static void show_count(){
        cout << count << endl ;
    }
    static int count;

};
int Happy :: count = 0;

int main(){
    Happy h1;
    h1.fun1();
    h1.fun2();
    h1.show_count(); // not appropriate
    Happy::show_count();  //appropriate
    return 0;
}
```

## 11. More on constructor destructor and this operator

This program helps to understand how can we use this operator. Similarly this gives an insight on nameless object and also the addition of objects and saving the result in object. i.e. object function call the methods in which object is taken as parameter and the returned result is also an object.

```cpp
#include <iostream>

using namespace std;

class Distance
{
private:
    float inch, feet;

public:
    Distance()
    {
        feet = inch = 0;
    }

    Distance(float in, float ft) : inch(in), feet(ft)
    {
    }
    void setvalue(float in, float ft)
    {
        this->inch = in;
        this->feet = ft;
    }
    void show(){
        cout << feet <<" "<< inch << endl;
    }
    Distance add(Distance len1);
    ~Distance(){
        // destructor
    }

};
Distance Distance:: add(Distance d1){
    inch += inch + d1.inch;
    feet += feet + d1.feet;
    // return this
    // return nameless object
    return Distance(inch, feet);

}

// Distance Distance:: add(Distance d1){
//     Distance temp;
//     temp.inch = inch + d1.inch;
//     temp.feet = feet + d1.feet;
//     return temp;

// }

int main()
{
    Distance d1, d2(1.2,1.4), d3(2.2, 3.3);
    d1 = d1.add(d2);
    d1.show();
    d2.show();
    d3.show();

}
```

## 11. Operator Overloading

Operator ovearloading is a way to redefine the built in fucntion to do specific task assigned by user.

#### General syntax:

```cpp
    classConstructor functionName <bulidIn:operator>(parameters);
```

#### Function defined explicitly

```cpp
functionType classReference::functionName<buildIN:operator>(dataType variableName){
    //code here
}
```

For example in the given program, + operator adds two object of class named "Distance".
The build in function of + operator (which is to add only two basic data types) was manipulated to add two operator. In this way, we can change the function of build in operators to do specific task.

```cpp
#include <iostream>
#include <string>

using namespace std;

class Distance
{
    float inch, feet;

public:
    Distance() {}
    Distance(float f, float i) : feet(f), inch(i)
    {
    }
    void setValue(float f, float i){
        feet = f;
        inch = i;
    }
    void show(){
        cout << "feet :" << feet << " " << "inch :" << inch << endl;
    }
    Distance operator +(Distance);
};

Distance Distance::operator+(Distance x){
    float ft, in;
    ft = this->feet + x.feet;
    in = this->inch + x.inch;
    return Distance(ft, in);
}
int main(){

    Distance d1, d2(3,5), d3(6,9);
    d1 = d2 + d3;
    d1.show();
    return 0;
}
```

### Non-member function and friend function.

```cpp
#include <iostream>
#include <string>

using namespace std;

class Distance
{
    float inch, feet;

public:
    Distance() {}
    Distance(float f, float i) : feet(f), inch(i)
    {
    }
    void setValue(float f, float i){
        feet = f;
        inch = i;
    }
    void show(){
        cout << "feet :" << feet << " " << "inch :" << inch << endl;
    }
    friend Distance operator +(Distance, Distance);
};

Distance operator +(Distance x, Distance y){
    float ft, in;
    ft = y.feet + x.feet;
    in = y.inch + x.inch;
    return Distance(ft, in);
}
```

### Uniray operator overloading

```cpp
#include <iostream>
#include <string>

using namespace std;

class Time
{
    int sec, min, hr;

public:
    Time(int h, int m, int s)
    {
        sec = s;
        min = m;
        hr = h;
    }
    void setValue(int h, int m, int s)
    {
        sec = s;
        min = m;
        hr = h;
    }
    void show()
    {
        cout << hr << ":" << min << ":" << sec;
    }

    Time operator++()
    {
        ++sec;
        ++min;
        ++hr;
        return Time(hr, min, sec);
    };
    Time operator++(int)
    {
        sec++;
        min++;
        hr++;
        return Time(hr, min, sec);
    };
};

int main()
{
    Time t1(2, 3, 4);
    ++t1;
    cout << "Pre increment:";
    t1.show();
    cout << endl;
    t1++;
    cout << "Post increment:";
    t1.show();
    cout << endl;
    return 0;
}
```

## 12. Assignment operator overloading

The following programs gives you an insight on concatinating and copying the member of object dynamically.

### Concatinating

```cpp
#include <iostream>
#include <cstring>

using namespace std;

class concat
{
    char *str;

public:
    concat()
    {
        str = new char[1];
        str[0] = '\0';
    }
    concat(char *nam)
    {
        int len = strlen(nam);
        str = new char[len + 1];
        strcpy(str, nam);
    }
    void show()
    {
        cout << "name is: " << str << endl;
    }
    ~concat() {}
    concat operator+(concat obj)
    {
        int len = strlen(obj.str) + strlen(this->str);
        char *temp = new char[len + 1];
        strcpy(temp, this->str);
        strcat(temp, obj.str);
        str = new char[len + 1];
        strcpy(str, temp);
        return *this;
    }
    // friend concat operator +(concat obj1, concat obj2){
    //     int len = strlen(obj1.str) + strlen(obj2.str);
    //     char *temp = new char[len + 1];
    //     strcpy(temp, obj2.str);
    //     strcat(temp,obj1.str);
    //     obj2.str = new char[len + 1];
    //     strcpy(obj2.str,temp);
    //     return obj2;
    // }
};

int main()
{
    concat person1("sita"), person2("ram"), person3;
    person3 = person1 + person2;
    person3.show();
}
```

### Copying

```cpp
#include <iostream>
#include <cstring>

using namespace std;

class Name
{
    char *str;

public:
    Name()
    {
        str = new char[1];
        str[0] = '\0';
    }
    Name(char *nam)
    {
        int len = strlen(nam);
        str = new char[len + 1];
        strcpy(str, nam);
    }
    ~Name()
    {
        delete[] str;
    }
    void show()
    {
        cout << str << endl;
    }
    Name operator=(Name);
};
Name Name ::operator=(Name obj)
{
    int len = strlen(obj.str);
    str = new char[len + 1];
    strcpy(str, obj.str);
    return Name(str);
}

int main()
{
    Name person1("Hello");
    person1.show();
    Name person2;
    person2 = person1;
    person2.show();

    return 0;
}
```

## 13. Comparing operator overloading

Overloading the comparetor operator for the determination of greater complex number.

```cpp
#include <iostream>
#include <cmath>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    Complex(int r, int i) : real(r), imag(i) {}
    float magnitude()
    {
        return sqrt(pow(real, 2) + pow(imag, 2));
    }
    float angle()
    {
        return atan(imag / real);
    }
    bool operator>(Complex);
};

bool Complex ::operator>(Complex x)
{
    return this->magnitude() > x.magnitude();
}

int main()
{

    Complex complex1(1, 7), complex2(3, 4);

    if (complex1 > complex2)
    {
        cout << "Complex number 1 is larger." << endl;
        cout << "Angle is " << complex1.angle() << endl;
        cout << "Magnitude is " << complex1.magnitude() << endl;
    }
    else
    {
        cout << "Complex number 2 is larger.";
    }

    return 0;
}
```

## 14. Data conversion

This code demonstrates how to define a class in C++ with a constructor and a conversion operator, and how to use these features to convert between different units of temperature.

```cpp
#include <iostream>
#include <cmath>
using namespace std;
class Temp
{
	private: float fahrenheit;
	public:Temp()
	{
		fahrenheit=0;
	}
	Temp(float celsius):fahrenheit(celsius)
	{
		fahrenheit=((celsius * static_cast<float>(9) / 5) + 32);
	}
	void show()
	{
		cout<<"The value of Temp in fahrenheit is "<<fahrenheit<<endl;

	}
	operator float(){

	return (static_cast<float>(5)/9 )* (fahrenheit - 32);
    }
	~Temp(){
	}
};
int main()
{
	float deg=49;
	Temp tempf=deg;
	tempf.show();
	float celsius=tempf;
	cout<<"The value of Temp in celsius is " << celsius<<endl;
	return 0;
}
```

## 15. Inheritance

#### 1. What is inheritance?

Inheritance is the process by which one class (the derived class) acquires the properties and methods of another class (the base class). The derived class inherits all the properties of the base class, without changing the properties of the base class and may add new features to its own.

#### 2. Necessity

Inheritance is used to avoid duplication of data and increase re-usability. For example, consider a group of vehicles. You need to create classes for Bus, Car, and Truck. The methods fuelAmount(), capacity(), applyBrakes() will be the same for all three classes. If we create these classes avoiding inheritance then we have to write all of these functions in each of the three classes.

#### 3. Types

Inheritance in C++ is a feature that allows a class (the derived class) to acquire the properties and methods of another class (the base class). There are five main types of inheritance in C++.

##### i. Single Inheritance

    A derived class is created from one base class. It’s the simplest form of inheritance.

##### ii. Multiple Inheritance

    A derived class is created from more than one base class. The derived class inherits all the properties of all base classes.

##### iii. Multilevel Inheritance

    This involves multiple levels of inheritance, where a derived class acts as a base class for other classes.

##### iv. Hierarchical Inheritance

    One base class serves as the foundation for multiple derived classes.

##### v. Hybrid Inheritance

    This is a combination of multiple and multilevel inheritance.

```cpp
#include <iostream>
using namespace std;

class base1{
    public :
    void show(){
        cout << "BASE1" << endl;
    }
};
class base2{
    public :
    void show(){
        cout << "BASE2" << endl;
    }
};
class base3{
    public :
    void show(){
        cout << "BASE3" << endl;
    }
};
class der : public base1, public base2, public base3{
    public:
    void show(){
        base1::show();
        base2::show();
        base3::show();
        cout << "DER" << endl;
    }
};
int main(){
    der d;
    d.show();
    return 0;
}
```

## 16. Virtual Function and Abstract Class

The keyword virtual is used to declare a function that can be overridden by derived classes. A virtual function is a function that can have different behaviors depending on the type of the object that calls it. This is called polymorphism, which is an important feature of object-oriented programming. A virtual function is declared with the virtual keyword in the base class, and can be redefined in the derived class with the same signature.

```cpp
#include <iostream>

using namespace std;

class shape{  //Abstract Class
	public:
		void virtual draw()=0;
		/* Pure Virtual Function -> Obj is not created from base virtual class*/
};

class circle:public shape{
	public:
		void draw(){
			cout << "CIRCLE" << endl;
		}
};

class rectangle:public shape{
	public:
		void draw(){
			cout << "RECTANGLE" << endl;
		}
};

class triangle: public shape{
	public:
		void draw(){
			cout << "TRIANGLE" << endl;
		}
};

int main(){

//	shape *s = new shape();  // error obj cant't be created from base since virtual function
//	s->draw();

	shape *s = new circle();
	s -> draw();

	s = new rectangle();
	s -> draw();

	s = new triangle();
	s -> draw();

	return 0;
}
```

## 17. Reinterpret Casting

In C++, reinterpret_cast is a type of casting operator used to convert one pointer type to another pointer type, or to convert one data type to another, regardless of their relatedness. It's a powerful but potentially dangerous type of casting because it performs a low-level reinterpretation of the bit pattern of the value being casted.

```cpp
#include <iostream>

using namespace std;

int main(){

	int x = 65;
	cout << x << endl;
	char *c = reinterpret_cast<char*>(&x);
	cout << *c << endl;

	return 0;
}
```

## 18. Pointer Object in Inheritance

In C++, pointer objects in inheritance allow pointers to both base and derived classes to access the members of their respective classes. When a pointer of the base class type points to a derived class object, it can access both base and derived class members, while a pointer of the derived class type can only access the members of the base class when pointing to a base class object. This distinction is fundamental for polymorphism and dynamic dispatch, ensuring code flexibility and efficient memory management.

```cpp
#include<iostream>

using namespace std;

class base{   //base class
	public:
		void show(){
			cout << "base class" << endl;
		}
};

class der: public base{  //derived class
	public:
		void show(){
			cout << "derived class" << endl;
		}
};

int main(){
//	use of pointer object in inheritance
	base *b = new base();
	b->show();  //content of b

	der *d = new der();
	d->show(); //content of d

	/* der *d = new base();   //error can't be access from der to base
	d->show();  */

	base *b1 = new der();
	b1->show(); //can be access from base to der
}
```

## 19. Error Handling

In C++, error handling involves managing exceptions gracefully using try, catch, and throw blocks. These mechanisms help detect, handle, and propagate exceptions, ensuring program stability and reliability. Exception handling separates error-handling code from normal code flow, promoting cleaner and more maintainable code, and enhances code robustness by providing a structured way to handle unexpected situations without terminating the program abruptly.

#### Genral Syntax:

```cpp
    try {
        // Code that may throw an exception
        // It could be a function call or a block of code
        // If an exception occurs, control jumps to the nearest catch block
    }
    catch (ExceptionType1 ex1) {
        // Handle exception of type ExceptionType1
    }
```

#### Program

```cpp

#include <iostream>
using namespace std;
int divide(int a, int b){
    if(b== 0){
        throw b;
    }
    else{
        return a/b;
    }
}
int main(){
    int a, b;
    char x[12];
    cout << "Numbers" << endl;
    try{
        cin >> a >> b;
        int z = divide(a, b);
        cout << "Result :: " << z << endl;
    }
    catch (int b){
        cout << "cant be divided by zero"<< endl;
    }
    return 0;
}
```

## 20. Rethrow and Catch Error

In C++, error handling is often performed using try, catch, and throw statements. When an error occurs, you throw an exception. This exception is then caught by a catch block, where you can handle the error.

The rethrow operation is used when an exception is caught in a catch block, but you determine that the current scope cannot adequately handle the exception. In this case, you can rethrow the exception to pass it up to a higher-level catch block. This is done using the throw; statement without an operand within a catch block.

#### General Format

```cpp
try {
    // Code that may throw an exception
} catch (std::exception& e) {
    // Handle exception, or...
    throw;  // Rethrow the exception if it can't be handled here
}
```

#### Program

```cpp
#include <iostream>

using namespace std;

float divide(float a, float b)
{
    try
    {
        if (b == 0)
        {
            throw b;
        }
        else
        {
            return (a / b);
        }
    }
    catch (float x)
    {
        cerr << "cant divide by 0 :: inner" << endl;
        throw; //rethrowing
    }
}

int main()
{
    float x = 14, y = 0;
    try
    {
        try{
            if(y==0){
                throw y;
            }
            else{
                cout << x/y;
            }
        }
        catch(float a){
            cout << "inner" << endl;
            throw;
        }

        // float z = divide(x, y);
        // cout << z << endl;
    }
    catch (float s)
    {
        cerr << "cant divide by zero :: outer";
    }
    return 0;
}
```

## 21. Templates

Templates in C++ are a powerful feature that allows you to write generic programs. They can be used to create functions and classes that can work with different data types.

```cpp
#include <iostream>

using namespace std;

template <class T>

T maax(T a, T b){
    return (a>b)?a:b;
}

int main(){
    int a = 10, b= 20;
    int z = maax(a, b);
    cout << z << endl;
    return 0;
}
```

## 22.Insertion and Extraction operator overloading

In C++, the stream insertion operator << and the extraction operator >> are used for output and input respectively. These operators can be overloaded to perform input and output for user-defined types, such as objects.

Overloading these operators involves creating a global function that returns a reference to a stream object1. This is because the stream operators are called on stream objects like cout (an object of ostream class) and cin (an object of istream class).

```cpp
#include <iostream>
#include <string>

using namespace std;

class person
{
public:
    string name;
    int age;
    person()
    {
        name = "Default";
        age = 0;
    }
    person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    ~person() {}
    friend ostream &operator<<(ostream &out, person &p);
    friend istream &operator>>(istream &in, person &p);
};

ostream &operator<<(ostream &out, person &p)
{
    out << p.name << " " << p.age << endl;
    return out;
}

istream &operator>>(istream &in, person &p)
{
    in >> p.name;
    in >> p.age;
    return in;
}

int main()
{
    person p;
    cin >> p;
    cout << p;

    return 0;
}
```

## 23. File Handling

File handling in C++ allows you to work with files stored on the computer's disk. It involves operations such as opening files, reading from them, writing to them, and closing them. Here's an overview of file handling in C++:

#### File Stream Objects:

File stream objects are used for interacting with files. There are three main file stream classes:

- ifstream: Input file stream, used for reading from files.
- ofstream: Output file stream, used for writing to files.
- fstream: File stream, which can be used for both reading and writing.

#### Opening a File:

Files need to be opened before reading from or writing to them. You can use the open() method of file stream objects to open files:

```cpp
ifstream inputFile;
inputFile.open("filename.txt");
```

Similarly, you can open output files using ofstream or fstream objects.

#### Checking if a File is Open:

You can use the is_open() method to check if a file was opened successfully:

```cpp
if (inputFile.is_open()) {
    // File opened successfully
} else {
    // Error handling
}
```

#### Closing a File:

It's important to close files after you're done with them using the close() method:

```cpp
inputFile.close();
```

#### Reading from a File:

You can use various methods to read data from files, including >> operator for formatted input, getline() for reading lines, and get() for reading characters.

#### Writing to a File:

To write data to a file, you can use the << operator or the write() method.

#### Error Handling:

File operations can fail due to various reasons like incorrect file paths, insufficient permissions, etc. Proper error handling is necessary to deal with such situations.

#### Modes for Opening Files:

Files can be opened in different modes such as ios::in for input, ios::out for output, ios::app for append, ios::binary for binary mode, etc.

#### File Positioning:

You can set or get the current position in a file using methods like seekg() and tellg() for input files, and seekp() and tellp() for output files.

File handling in C++ provides a powerful mechanism for working with files, allowing you to create, read, and manipulate data stored in files on disk.

#### Program To Write on File

```cpp
#include <iostream>
#include <fstream>


using namespace std;

int main()
{
    ofstream file;
    file.open("data.txt",ios::app);
    char x[20];
    int age;
    cout << "Name ::";
    cin.getline(x,20);
    cout << "Age ::";
    cin >> age;
    file << x << " " << age << endl;


    return 0;
}
```

#### Program to Read From File

```cpp
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream infile;
    char read[20];

    infile.open("data.txt");

    while (infile)
    {
        infile >> read;
        cout << read << endl;
    }

    return 0;
}
```

## 24. Standard Template Library (STL)

The Standard Template Library (STL) in C++ provides a collection of template classes and functions for common data structures and algorithms. It consists of three main components: containers (like vectors and maps), iterators (for traversing containers), and algorithms (for performing operations on containers). The STL promotes code reuse, readability, and maintainability in C++ programming.

```cpp
#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
#include<queue>
#include<map>
#include<string>

using namespace std;

int main()
{
    set<double> s;
    s.insert(2);
    s.insert(1);
    s.insert(3);
    s.insert(2);
    set<double>::iterator itr;
    cout<<"set"<<endl;
    for(itr=s.begin();itr!=s.end();++itr)
    {
        cout<<*itr<<endl;
    }
    cout<<"___________________________________________"<<endl;
    vector<double> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    cout<<"vector"<<endl;
    vector<double>::iterator itrr;
    sort(v.begin(),v.end());
    for(itrr=v.begin();itrr!=v.end();++itrr)
    {
        cout<<*itrr<<endl;
    }

    cout<<"___________________________________________"<<endl;
    multiset<double> ms;
    ms.insert(2);
    ms.insert(2);
    ms.insert(1);
    multiset<double>::iterator it;
    cout<<"multiset"<<endl;
    for(it=ms.begin();it!=ms.end();++it)
    {
        cout<<*it<<endl;
    }

    cout<<"___________________________________________"<<endl<<"queue"<<endl;
    queue<double> q;
    q.push(2);
    q.push(1);
    q.push(3);
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
     cout<<"___________________________________________"<<endl<<"map"<<endl;
    map<string,int> m;
    m["ram"]=10;
    m["raam"]=100;
    m["shyam"]=20;
    m["reema"]=30;
    cout<<m["ram"]<<endl;
    cout<<m["shyam"]<<endl;
    pair<string,int> p;
    for(auto p:m)
    {
        cout<<p.first<<":"<<p.second<<endl;
    }
}
```