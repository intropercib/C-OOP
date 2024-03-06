#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
using namespace std;
class person
{
private:
    int id;
    string name;
    int age;

public:
    person() {}
    person(string n, int a, int i) : name(n), age(a), id(i) {}
    string getname()
    {
        return name;
    }
    int getage()
    {
        return age;
    }

    int getid()
    {
        return id;
    }
    void setdata()
    {
        cout << "Enter name:: " << endl;
        getline(cin, name);
        cout << "Enter age:: " << endl;
        cin >> age;
        cout << "Enter id:: " << endl;
        cin >> id;
    }

    void putdata()
    {
        cout << "Name :: " << name << "Age:: " << age << "Id:: " << id << endl;
        cout << "________________________________________________" << endl;
    }
    void addrecord();
    void readall();
    void readone();
    void update();
    int deleterecord();
    void deleterecord_byid();
    ~person(){};
};
void person::addrecord()
{
    this->setdata();
    ofstream fout("person.dat", ios::out | ios::app | ios::binary);
    fout.write(reinterpret_cast<char *>(this), sizeof(person));
    fout.close();
    cout << "Record added successfully !" << endl;
}
void person::readall()
{
    ifstream fin("person.dat", ios::in | ios::binary);
    fin.seekg(0, ios::end);
    fin.seekg(0, ios::beg);

    while (fin.read(reinterpret_cast<char *>(this), sizeof(person)))
    {
        this->putdata();
    }
    fin.close();
    cout << "________________________________________________" << endl;
}
void person::readone()
{
    int id;
    cout << "Enter id:: ";
    cin >> id;
    cout << "________________________________________________" << endl;
    ifstream fin("person.dat", ios::in | ios::binary);
    bool found = false;
    while (fin.read(reinterpret_cast<char *>(this), sizeof(person)))
    {
        if (this->id == id)
        {
            this->putdata();
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "No record found with id " << id << endl;
    }
    fin.close();
    cout << "________________________________________________" << endl;
}

void person::update()
{
    cout << "Enter id:: ";
    int id;
    cin >> id;
    cin.ignore();
    fstream file("person.dat", ios::in | ios::out | ios::binary);
    bool found = false;
    while (file.read(reinterpret_cast<char *>(this), sizeof(person)))
    {
        if (this->id == id)
        {
            cout << "Current details of the person with id " << id << " are: " << endl;
            this->putdata();
            cout << "Enter new details: " << endl;
            this->setdata();
            file.seekp(file.tellp() - streampos(sizeof(person)));
            file.write(reinterpret_cast<char *>(this), sizeof(person));
            cout << "Record updated successfully !" << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "No record found with id " << id << endl;
    }
    file.close();
    cout << "________________________________________________" << endl;
}

int person::deleterecord()
{
    char choice;
    cout << "Delete Confirm ? (y/n) :: ";
    cin >> choice;
    if (choice == 'y' || choice == 'Y')
    {
        remove("person.dat");
        ofstream fout("person.dat", ios::out | ios::app | ios::binary);

        cout << "File deleted successfully !" << endl;
        cout << "________________________________________________" << endl;
    }
    else
    {
        return 0;
    }
}

void person::deleterecord_byid()
{
    cout << "Enter id:: ";
    int id;
    cin >> id;
    cin.ignore();
    ifstream fin("person.dat", ios::in | ios::binary);
    ofstream fout("temp.dat", ios::out | ios::binary);
    bool found = false;
    while (fin.read(reinterpret_cast<char *>(this), sizeof(person)))
    {
        if (this->id == id)
        {
            found = true;
            cout << "The following record will be deleted: " << endl;
            this->putdata();
        }
        else
        {
            fout.write(reinterpret_cast<char *>(this), sizeof(person));
        }
    }
    fin.close();
    fout.close();
    remove("person.dat");
    rename("temp.dat", "person.dat");
    if (found)
    {
        cout << "Record deleted successfully !" << endl;
    }
    else
    {
        cout << "No record found with id " << id << endl;
    }
    cout << "________________________________________________" << endl;
}

int main()
{
    person p;
    int choice;
    system("cls");
    cout << "______________________\"Basic File Handling Program\"__________________________" << endl;
    do
    {
        cout << "\t1.Add record" << endl
             << "\t2.Read all records" << endl
             << "\t3.Read specific" << endl
             << "\t4.Update record" << endl
             << "\t5.Delete record" << endl
             << "\t6.Delete record by id" << endl
             << "\t7.Exit" << endl;
        cout << "________________________________________________" << endl;

        cout << "Enter your choice:: ";
        cin >> choice;
        cin.ignore();
        system("cls");
        switch (choice)
        {
        case 1:
            p.addrecord();
            break;
        case 2:
            p.readall();
            break;
        case 3:
            p.readone();
            break;
        case 4:
            p.update();
            break;
        case 5:
            p.deleterecord();
            break;
        case 6:
            p.deleterecord_byid();
        case 7:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice\n";
            break;
        }

    } while (choice != 7);

    return 0;
}