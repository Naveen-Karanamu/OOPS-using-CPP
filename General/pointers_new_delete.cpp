#include <iostream>
using namespace std;

int main()
{
    // pointers
    int a = 4;
    int *p = &a;
    cout << *p << endl;

    // new operator-used to allocate memory dynamically
    int *ptr = new int(20);
    cout << *ptr << endl;

    int *arr = new int[3];
    arr[0] = 100;
    arr[1] = 200;
    arr[2] = 300;
    cout << arr[0] << endl
         << arr[1] << endl
         << arr[2] << endl;

    // Delete operator -used to deallocate the dynamically allocated memory
    delete[] arr; //[] is used to delete the whole arr
    cout << arr[0] << endl
         << arr[1] << endl
         << arr[2] << endl;

    return 0;
}