// If the data types are specifid while declaring the object then it will be considered or the default data types will be considered

#include <iostream>
using namespace std;

template <class t1 = int, class t2 = float>
class temp
{
    t1 a;
    t2 b;

public:
    temp(t1 x, t2 y)
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
    temp<> t1(1, 20.5);
    // t1.display();
    temp <char,int> t2('a',5);
    t2.display();

    return 0;
}