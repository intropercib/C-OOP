#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string name, report, rollNo;
    float marks[5], totalMarks, percentage;
    string subject[5];
    static int passMarks;

public:
    Student(string fname, string roll, float marksArr[5], string sub[5])
    {
        this->name = fname;
        this->rollNo = roll;
        for (int i = 0; i < 5; ++i)
        {
            marks[i] = marksArr[i];
            subject[i] = sub[i];
        }
        totalStudents++;

        calres();
    }

    ~Student()
    {
    }

    void setMarks(float marksArr[5])
    {
        for (int i = 0; i < 5; ++i)
        {
            marks[i] = marksArr[i];
        }
        calres();
    }

    static int totalStudents;

    static void displayTotalStudents()
    {
        cout << "Total students: " << totalStudents << endl;
    }

    void displayInfo()
    {
        cout << "___________________________________________" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        for (int i = 0; i < 5; ++i)
        {
            cout << "Marks of " << subject[i] << "::" << marks[i] << endl;
        }
        cout << "___________________________________________" << endl;
        cout << "Total Marks: " << totalMarks << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Result: " << report << endl;
    }

private:
    void calres()
    {
        report = "Pass";
        totalMarks = 0;
        for (int i = 0; i < 5; ++i)
        {
            totalMarks += marks[i];
            if (marks[i] < passMarks)
            {
                report = "Fail";
                break;
            }
        }
        percentage = (static_cast<float>(totalMarks) / 5.0);
    }
};

int Student::passMarks = 32;
int Student::totalStudents = 0;

float marksInput(float *marks, string subject[5])
{

    for (int i = 0; i < 5; i++)
    {
        do
        {
            cout << "Marks of " << subject[i] << " ::";
            cin >> marks[i];
            if (marks[i] > 100 || marks[i] < 0)
            {
                cout << "Invalid Marks" << endl;
            }
        } while (marks[i] < 0 || marks[i] > 100);
    }
}

int main()
{

    float marks[5];
    string subject[] = {"a", "b", "c", "d", "e"}, name, rollno;
    char setMore, addMore;
    while (true)
    {
        cout << "_______________________Student detail___________________________" << endl;
        cout << "Name ::";
        cin >> name;
        cout << "Roll no ::";
        cin >> rollno;

        marksInput(marks, subject);
        Student student(name, rollno, marks, subject);

        cout << "Wanna set the value (y/n)::";
        cin >> setMore;
        if (setMore == 'y')
        {
            marksInput(marks, subject);
        }
        student.setMarks(marks);
        student.displayInfo();
        student.displayTotalStudents();
        cout << "Add more ?? (y/n) ::";
        cin >> addMore;
        if (addMore != 'y')
        {
            break;
        }
    }

    return 0;
}
