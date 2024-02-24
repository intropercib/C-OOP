// exception handling with arguments

#include <iostream>
#include <cstring>
#include <typeinfo>
#define max 5
using namespace std;
class stak
{
private:
    int ary[max];
    int top;

public:
    class error
    { // eception with arguments
    public:
        string msg;
        error(string m)
        {
            msg = m;
        }
        ~error()
        {
        }
    };
    stak()
    {
        top = -1;
    }
    void push(int a)
    {
        if (top >= (max - 1))
            throw error("stack full ");
        ary[++top] = a;
    }
    int pop()
    {
        if (top == -1)
            throw error("stack empty");
        return ary[top--];
    }
    ~stak()
    {
    }
};
int main()
{
    try
    {
        int i;
        stak s;
        s.push(10);
        s.push(20);
        s.push(30);
        s.push(40);
        s.push(50);
        // s.push(60);   // This line will cause an error if uncommented
        for (i = 0; i < 5; i++)
        {
            cout << s.pop() << endl;   // This line will cause an error if condition "i < *" where *>=6

        }
    }
    catch (stak::error e)
    {
        cerr << e.msg << endl;
    }
    return 0;
}