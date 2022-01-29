#include <iostream>
using namespace std;

template <class t>
class func
{
    t a;

public:
    func(t x)
    {
        a = x;
    }
    void display();
};

template <class t>
void func<t>::display()
{
    cout << a << endl;
}

int main()
{
    func<int> f(1);
    f.display();

    return 0;
}