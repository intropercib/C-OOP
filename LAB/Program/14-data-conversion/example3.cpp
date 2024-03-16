#include<iostream>

using namespace std;

class gram;

class kilogram
{
    float kg;
    public:
    kilogram(float k=0)
    {
        kg=k;
    }

    void show()
    {
        cout<<kg<<" kg"<<endl;
    }
    ~kilogram(){}

    friend gram operator+(gram,kilogram);
};

class gram
{
    float g;
    public:
    gram(float gr=0)
    {
        g=gr;
    }

    void show()
    {
        cout<<g<<" grams" <<endl;
    }

    ~gram(){}

    friend gram operator+( gram, kilogram);
};

gram operator+(gram x, kilogram y)
{
    return gram(x.g+(y.kg*1000));
}

int main()
{
    kilogram k(1);
    k.show();
    gram input(500);
    input.show();
    gram output= input + k;
    cout<<endl<<"Kg In g : ";
    output.show();
    return 0;
}