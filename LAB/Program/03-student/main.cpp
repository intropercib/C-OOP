
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