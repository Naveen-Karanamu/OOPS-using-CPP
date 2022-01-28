#include <iostream>
using namespace std;

class test
{
    int a;

public:
    void setData(float a)
    {
        // a = a; //here both the a's will refer to the local float a, which assigns a garbage value to the a
        this->a=a;
        // this is a keyword which is a pointer which points to the object which invokes the member function
    }
    void getData()
    {
        cout << "The value of a is :" << a << endl;
    }
};

int main()
{
    test t1;
    t1.setData(2);
    t1.getData();
    return 0;
}