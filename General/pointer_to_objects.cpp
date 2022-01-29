#include <iostream>
using namespace std;

class test
{
    int a;

public:
    void setData(int x)
    {
        a = x;
    }
    void getData()
    {
        cout << a << endl;
    }
};

int main()
{
    test t1;
    test *ptr = &t1;
    // test *ptr=new test;
    (*ptr).setData(10); //backets are important
    // ptr->setData(10); // arrow operator
    (*ptr).getData();

    // Array of objects
    test *p = new test[3];

    p->setData(100);
    p->getData();

    return 0;
}