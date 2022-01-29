// But the vitual funtion rewrites the default behaviour of the pointer. Now the base class pointer which is pointing towards the derived class object, will run the derived class display if given.

// For this we should declare the base class display function as the virtual function 

#include <iostream>
using namespace std;

class base
{
public:
    int b;
    virtual void display()
    {
        cout << "b :" << b << endl;
    }
};
class derived : public base
{
public:
    int d=20;
    void display()
    {
        cout << "b :" << b << endl;
        cout << "d :" << d << endl;
    }
};

int main()
{
    base *basePtr;
    base bas;
    derived der;
    basePtr = &der;
    basePtr->b = 10;
    basePtr->display();

    

    return 0;
}