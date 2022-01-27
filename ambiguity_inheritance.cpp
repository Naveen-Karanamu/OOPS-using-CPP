// When two base classes have the same function and that is been used by the derived class, then it creates the ambiguity.
// Then to resolve this we use the ambiguity scoope resolution operator to mention which class function it should use
// In the single inhritance the ambiguity will be automatically resolved as the derived class overrides the fucntion
#include <iostream>
using namespace std;

class base_1
{
public:
    void getBase()
    {
        cout << "From base -1" << endl;
    }
};

class base_2
{
public:
    void getBase()
    {
        cout << "From base -2" << endl;
    }
};

class derived : public base_1, public base_2
{
public:
    void func()
    {
        base_2::getBase();
    }
};
int main()
{
derived d1;
d1.func();
    return 0;
}