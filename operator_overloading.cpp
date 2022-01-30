// Operators are generally designed to use with the pre defined data types. But what if we need to perform the operations on the user defined data type. To do that we use the operator overloading.

// The basic fuction of the operator won't be changed.

// We can't create the new operators using operator overloading

// Atleast one user defined data type should be used in the operator overloading.

// We pass the objects as the arguments to the operator overloading

// We can't overload the ::, ., .*, sizeof(), ?:.

//Left side of the operand of the operator Operator should be the member of the same class

#include <iostream>
using namespace std;

class test
{
    int a;

public:
    void setData()
    {
        cin >> a;
    }

    // void compare(test t2)
    void operator==(test t2) //oprator overloading
    {
        if (a == t2.a)
            cout << "Equal" << endl;
        else
            cout << "Not equal" << endl;
    }
};

int main()
{
    test t1, t2;
    t1.setData();
    t2.setData();
    // t1.operator==(t2);  -->will work
    t1 == t2;
    return 0;
}