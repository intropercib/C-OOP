#include <iostream>
#include <cstring>
#include <Windows.h>
using namespace std;

class tic_tac_toe
{
private:
    char board[3][3];

    int replaces(int pos, char choice)
    {
        int tryflag = 0;
        if (pos < 1 || pos > 9)
        {
            cout << "Invalid position. Try Again." << endl;
            tryflag = 1;
        }
        else
        {
            int i = (pos - 1) / 3;
            int j = (pos - 1) % 3;
            if (board[i][j] == 'X' || board[i][j] == 'O')
            {
                cout << "Already filled. Try Again." << endl;
                tryflag = 1;
            }
            else
            {
                board[i][j] = choice;
            }
        }
        return tryflag;
    }

public:
    tic_tac_toe() : board{{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}} {}

    void show()
    {
        cout << "\t\t\t:::::::::::::::::::::::\n";
        for (int i = 0; i < 3; ++i)
        {
            cout << "\t\t\t::  " << board[i][0] << "  ::  " << board[i][1] << "  ::  " << board[i][2] << "  ::\n";
            cout << "\t\t\t:::::::::::::::::::::::\n";
        }
        cout << endl;
    }

    void setdata_usr1()
    {
        int pos;
        int tryflag = 0;
        do
        {
            cout << "______________________________" << endl;
            cout << "USER 1 \"X\": Enter position: ";
            cin >> pos;
            tryflag = replaces(pos, 'X');
        } while (tryflag == 1);
    }

    void setdata_usr2()
    {
        int pos;
        int tryflag = 0;
        do
        {
            cout << "______________________________" << endl;
            cout << "USER 2 \"O\": Enter position: ";
            cin >> pos;
            tryflag = replaces(pos, 'O');
        } while (tryflag == 1);
    }

    bool check()
    {
        int count = 0;

        for (int i = 0; i < 3; i++)
        {
            if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
            {
                cout << "______________________________" << endl;
                cout << "Player "
                     << "\"" << board[i][0] << " wins"
                     << "\"" << endl;
                return true;
            }
            if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
            {
                cout << "______________________________" << endl;
                cout << "Player "
                     << "\"" << board[0][i] << "\""
                     << " wins" << endl;
                return true;
            }
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] == 'X' || board[i][j] == 'O')
                {
                    count++;
                }
            }
        }
        if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        {
            cout << "______________________________" << endl;
            cout << "Player "
                 << "\"" << board[0][0] << "\""
                 << " wins." << endl;
            return true;
        }
        if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        {
            cout << "______________________________" << endl;
            cout << "Player "
                 << "\"" << board[0][2] << "\""
                 << " wins" << endl;
            return true;
        }
        if (count == 9)
        {
            cout << "______________________________" << endl;
            cout << "Match Draw !" << endl;
            return true;
        }
        return false;
    }
};

int main()
{
    system("cls");

    char playAgain;

    do
    {
        tic_tac_toe t;
        cout << "\t\t\t       HAPPY GAMING" << endl;
        t.show();
        while (true)
        {
            system("color 1");
            t.setdata_usr1();
            system("cls");
            cout << "\t\t\t       HAPPY GAMING" << endl;
            t.show();
            if (t.check())
            {
                system("color 6");
                break;
            }
            system("color 4");
            t.setdata_usr2();
            system("cls");
            cout << "\t\t\t       HAPPY GAMING" << endl;
            t.show();
            if (t.check())
            {
                system("color 6");
                break;
            }
        }

        cout << "______________________________" << endl;
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
        system("cls");

    } while (playAgain == 'y' || playAgain == 'Y');
    system("color 7");
    return 0;
}
