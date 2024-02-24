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
    class fullerror
    { // eception with arguments
    public:
        string msg;
        fullerror(string m)
        {
            msg = m;
        }
        ~fullerror(){}
    };

public:
    class emptyerror
    { // eception with arguments
    public:
        string msg;
        emptyerror(string m)
        {
            msg = m;
        }
        ~emptyerror(){}
    };
    stak()
    {
        top = -1;
    }
    void push(int a)
    {
        if (top >= (max - 1))
            throw fullerror("stack full ");
        ary[++top] = a;
    }
    int pop()
    {
        if (top == -1)
            throw emptyerror("stack empty");
        return ary[top--];
    }
    ~stak()
    {
    }
};
int main()
{
    stak s;
    int i;
    try
    {
        for (i = 0; i < 5; i++)
        {
            s.push(i); // This line will cause an error if condition "i < *" where *>=6
        }
    }
    catch (stak::fullerror e)
    {
        cerr << e.msg << endl;
    }
    try
    {
        for (i = 0; i < 5; i++)
        {
            cout << s.pop() << endl; // This line will cause an error if condition "i < *" where *>=6
        }
    }
    catch (stak::emptyerror e)
    {
        cerr << e.msg << endl;
    }
    return 0;
}