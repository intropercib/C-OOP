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
