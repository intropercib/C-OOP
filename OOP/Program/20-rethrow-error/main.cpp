#include <iostream>

using namespace std;

float divide(float a, float b)
{
    try
    {
        if (b == 0)
        {
            throw b;
        }
        else
        {
            return (a / b);
        }
    }
    catch (float x)
    {
        cerr << "cant divide by 0 :: inner" << endl;
        throw; //rethrowing
    }
}

int main()
{
    float x = 14, y = 0;
    try
    {   
        try{
            if(y==0){
                throw y;
            }
            else{
                cout << x/y;
            }
        }
        catch(float a){
            cout << "inner" << endl;
            throw;
        }

        // float z = divide(x, y);
        // cout << z << endl;
    }
    catch (float s)
    {
        cerr << "cant divide by zero :: outer";
    }
    return 0;
}