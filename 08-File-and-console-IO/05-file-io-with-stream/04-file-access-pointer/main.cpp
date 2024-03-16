#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream file;
    file.open("example.txt", ios::in | ios::out);

    if (!file) {
        cout << "Error in opening file!";
        return 0;
    }

    // Writing to file
    file << "Hello, World!";

    // Using tellg() to get the position
    cout << "Current file pointer position: " << file.tellg() << endl;

    // Using seekg() to move the position
    file.seekg(0);

    // Displaying the new position
    cout << "File pointer position after seekg: " << file.tellg() << endl;

    // Closing the file
    file.close();

    return 0;
}