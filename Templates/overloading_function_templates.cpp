// Exact match takes the highest priority

#include <iostream>
using namespace std;

void func(int a)
{
    cout << "Function :" << a << endl;
}

template <class t>
void func(t a)
{
    cout << "Template :" << a << endl;
}

int main()
{
    func(1);

    return 0;
}