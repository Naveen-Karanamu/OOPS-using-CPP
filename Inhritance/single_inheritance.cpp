#include <iostream>
using namespace std;

class Base
{
    int a;

public:
    int b;
    void setData()
    {
        a = 100;
        b = 200;
    };
    int getData_a()
    {
        return a;
    }
    int getData_b()
    {
        return b;
    }
};

class Derived : public Base
{
    int c;

public:
    void load()
    {
        c = getData_a() * b;
    }
    void display()
    {
        cout << "The value of a is :" << getData_a() << endl;
        cout << "The value of b is :" << b << endl;
        cout << "The value of c is :" << c << endl;
    }
};

int main()
{
    Derived d1;
    // If the visibility mode of the derived classs is private then we can't call the public members of the base class outside the derived class but we can call them inside the derived class.
    
    // For example we can call the setData() inside the load() function to use it.
    
    d1.setData();
    d1.load();
    d1.display();
    return 0;
}