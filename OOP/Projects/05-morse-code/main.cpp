#include <iostream>
#include <string>
#include <map>

using namespace std;
class Translator
{
private:
    std::map<char, string> morse = {
        {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."}, {'F', "..-."}, {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"}, {'K', "-.-"}, {'L', ".-.."}, {'M', "--"}, {'N', "-."}, {'O', "---"}, {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"}, {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"}, {'Y', "-.--"}, {'Z', "--.."}, {'1', ".----"}, {'2', "..---"}, {'3', "...--"}, {'4', "....-"}, {'5', "....."}, {'6', "-...."}, {'7', "--..."}, {'8', "---.."}, {'9', "----."}, {'0', "-----"}, {' ', "/"}};
    string result;
    string text;

    void textToMorse(string text)
    {
        for (int i = 0; i < text.length(); i++)
        {
            result += morse[toupper(text[i])] + " ";
        }
    }

    void morseToText(string text)
    {
        string morseCode;
        for (char c : text)
        {
            if (c == ' ' || c == '/')
            {
                for (auto &it : morse)
                {
                    if (it.second == morseCode)
                    {
                        result += it.first;
                        break;
                    }
                }
                morseCode.clear();
                if (c == '/')
                {
                    result += ' ';
                }
            }
            else
            {
                morseCode += c;
            }
        }
        for (auto &it : morse)
        {
            if (it.second == morseCode)
            {
                result += it.first;
                break;
            }
        }
    }
    void showResult()
    {
        cout << "OUTPUT :: " << result << endl;
    }
    string getInput()
    {
        cout << "Enter the text: ";
        getline(cin, text);
        return text;
    }

public:
    void translate(int choice)
    {
        if (choice == 1)
        {
            string text = this->getInput();
            textToMorse(text);
            this->showResult();
            result.clear();
            cout << "_______________________________________________" << endl;
        }
        else if (choice == 2)
        {
            string text = this->getInput();
            morseToText(text);
            this->showResult();
            result.clear();
            cout << "_______________________________________________" << endl;
        }
        else if (choice == 3)
        {   
            cout << "Exiting..." << endl;
            exit(0);
        }
        else
        {
            cout << "Invalid choice" << endl;
            cout << "_______________________________________________" << endl;
        }
    }
};

int main()
{
    int choice;
    Translator translator;
    while (true)
    {
        cout << "\t\tTRANSLATOR\n";
        cout << " \t1. Text to Morse Code\n \t2. Morse Code to Text\n \t3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();
        cout << "_______________________________________________" << endl;
        translator.translate(choice);
    }

    return 0;
}
