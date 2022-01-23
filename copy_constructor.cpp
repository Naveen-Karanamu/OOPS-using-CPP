#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int x)
    {
        a = x;
    }
    //   Copy constructor
    // Compiler already assign a default copy constructor for every class. So even if no copy constructor is defined, compiler uses it's own copy constructor.
    Number(Number &o1)
    {
        a = o1.a;
    }

    void getData(){
        cout<<a<<endl;
    }
};

int main()
{
    Number n1,n2,n3;
    n1.getData();
    n2=Number(10);
    n2.getData();
    Number n4(n3);
    // or Number n4=n3;
    n4.getData();

    return 0;
}