#include <iostream>
using namespace std;

class base
{
public:
    int b;
    void display()
    {
        cout << "b :" << b << endl;
    }
};
class derived : public base
{
public:
    int d;
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
    // When we point the base class pointer to the derived class object and then run the display function then the base class display function will run // it is the default behaviour of this pointer
    basePtr = &der;
    basePtr->b = 10;
    basePtr->display();

    
    derived *derPtr;
// ig we can't point a derived class pointer to a base class pointer
    derPtr = &der;
    derPtr->b=100;
    derPtr->d=200;
    derPtr->display();

    return 0;
}