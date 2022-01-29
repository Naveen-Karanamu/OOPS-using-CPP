#include <iostream>
using namespace std;

class Base1
{
    int data1;

public:
    Base1(int a)
    {
        data1 = a;
        cout << "data1 :" << data1 << endl;
    }
    void print1()
    {
        cout << "Base1 constructor called" << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int a)
    {
        data2 = a;
        cout << "data2 :" << data2 << endl;
    }
    void print2()
    {
        cout << "Base2 constructor called" << endl;
    }
};

class derived : public Base1, public Base2
{
    int data3, data4;

public:
    derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        data3 = c;
        data4 = d;
        cout << "data3 :" << data3 << endl;
        cout << "data4 :" << data4 << endl;
    }
    void printDer()
    {
        cout << "Derived constructor called" << endl;
    }
};

int main()
{
    derived d1(1, 2, 3, 4);
    d1.print1();
    return 0;
}