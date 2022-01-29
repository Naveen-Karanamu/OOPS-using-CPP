#include <iostream>
using namespace std;

class test
{
    int a, b;

public:
    // test(int x, int y) : a(x), b(y)
    // test(int x, int y) : a(x), b(y+2)
    // test(int x, int y) : a(x), b(y+a)
// test(int x, int y) :  b(y),a(x+b)//will give the garbage value as we declared a first it will be initialized first.
    test(int x, int y) : a(x), b(y)
    {
        cout << "Constructor called" << endl;
        cout << "a :" << a << endl
             << "b :" << b << endl;
    }
};

int main()
{
    test t1(1, 2);

    return 0;
}