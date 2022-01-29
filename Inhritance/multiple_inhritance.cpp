#include <iostream>
using namespace std;

class Base_1
{
protected:
    int b1;

public:
    void setbase_1(int a)
    {
        b1 = a;
    }
};

class Base_2
{
protected:
    int b2;

public:
    void setbase_2(int a)
    {
        b2 = a;
    }
};

//Syntax for multiple inheritance
class Derived :public Base_1, public Base_2{
    public :
        void display(){
            cout << "The value of the base 1 is :" << b1 << endl
                 << "The value of base 2 is :" << b2;
}
}
;

int main()
{
    Derived d1;
    d1.setbase_1(10);
    d1.setbase_2(20);
    d1.display();

    return 0;
}