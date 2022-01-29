#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    friend void getData(Complex o1);
    Complex()
    {
        a = 1;
        b = 2;
    }
    Complex(int x)
    {
        a = x;
        b = 2;
    }
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
};

void getData(Complex o1)
{
    cout << o1.a << " + " << o1.b << "i" << endl;
}

int main()
{
    Complex c1, c2, c3;
    c1;
    getData(c1);

    c2 = Complex(4);
    getData(c2);

    c3 = Complex(5, 6);
    getData(c3);

    return 0;
}