#include <iostream>
using namespace std;

int main()
{
    int a, b;

    try
    {
        cin >> a >> b;
        if (b == 0)
            throw 0;

        cout << "Division is :" << a / b << endl;
    }
    catch (int x)
    {
        cout << "Division not possible" << endl;
    }

    return 0;
}