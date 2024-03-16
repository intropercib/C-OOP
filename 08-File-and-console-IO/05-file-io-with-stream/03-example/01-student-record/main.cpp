#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Student {
public:
    string id;
    string name;
    string address;
    string contact;
    string bloodGroup;

    void input() {
        cout << "Enter ID: ";
        getline(cin, id);
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Address: ";
        getline(cin, address);
        cout << "Enter Contact: ";
        getline(cin, contact);
        cout << "Enter Blood Group: ";
        getline(cin, bloodGroup);
    }

    void writeToFile() {
        ofstream file("Record.txt");
        if (file.is_open()) {
            file << id << endl;
            file << name << endl;
            file << address << endl;
            file << contact << endl;
            file << bloodGroup << endl;
            file.close();
        } else {
            cout << "Unable to open file";
        }
    }

    void readFromFile() {
        ifstream file("Record.txt");
        if (!file) {
            cout << "Unable to open file";
        } 
        
        else {
            getline(file, id);
            getline(file, name);
            getline(file, address);
            getline(file, contact);
            getline(file, bloodGroup);
            file.close();
        }
    }

    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Contact: " << contact << endl;
        cout << "Blood Group: " << bloodGroup << endl;
    }
};

int main() {
    Student student;
    student.input();
    student.writeToFile();
    student.readFromFile();
    student.display();

    return 0;
}