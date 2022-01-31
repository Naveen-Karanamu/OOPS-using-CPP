// Try: It will try the code and checks if there are any errors present.

// Throw: It will throw the error form the try block to the catch block. After the trow statement the remaing code in the try block won't be executed.

// Catch: It will catch the error thrown by the throw block and shows it to the user. Catch should be there if we are using the try block

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