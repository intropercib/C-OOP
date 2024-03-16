#include <iostream>
#include <typeinfo>
#define max 5
using namespace std;
class stak
{
private:
    int ary[max];
    int top;

public:
    stak()
    {
        top = -1;
    }
    void push(int a)
    {
        ary[++top] = a;
    }
    int pop()
    {
        return ary[top--];
    }
    ~stak(){}
};
int main()
{
    int i;
    stak s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    for (i = 0; i < 5; i++)
    {
        cout << s.pop() << endl;
    }
    return 0;
}