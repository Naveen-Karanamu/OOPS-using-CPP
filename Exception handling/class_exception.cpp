// In the classes the destructor will be called before ther throw as the scope ends there.

#include <iostream>
using namespace std;

class test
{
public:
    test()
    {
        cout << "Constructor" << endl;
    }
    ~test()
    {
        cout << "Destructor" << endl;
    }
};

int main()
{
    try
    {
        cout << "Try" << endl;
        test t1;
        cout << "Tested" << endl;
        throw 0;
    }
    catch (...)
    {
        cout << "Catch" << endl;
    }

    return 0;
}