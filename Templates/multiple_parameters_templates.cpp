#include <iostream>
using namespace std;

template <class t1, class t2>
class data
{
    t1 a;
    t2 b;

public:
    data(t1 x, t2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << a << endl
             << b;
    }
};

int main()
{
    data<int, char> d1(1, 'a');
    d1.display();

    return 0;
}