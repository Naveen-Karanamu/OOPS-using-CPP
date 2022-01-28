#include <iostream>
using namespace std;

class Class
{
    int roll;
    float marks;

public:
    void setData(int a, float b)
    {
        roll = a;
        marks = b;
    }
    void getData()
    {
        cout << "The marks of the student of roll number " << roll << " is :" << marks << endl;
    }
};

int main()
{
    int n;
    cout << "Enter the number of students in the class" << endl;
    cin >> n;
    Class *ptr = new Class[n];
    Class *temp = ptr;
    for (int i = 0; i < n; i++)
    {
        int p;
        float q;
        cout << "Enter the roll number and the marks of the student :" << i + 1 << endl;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }
    cout << "The entries are :" << endl;
    for (int i = 0; i < n; i++)
    {
        temp->getData();
        temp++;
    }
    return 0;
}