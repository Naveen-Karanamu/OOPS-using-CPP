#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void);
    void getData(void);
};

int Employee ::count;

void Employee::setData(void)
{
    cout << "Enter the Id" << endl;
    cin >> id;
    count++;
}
void Employee :: getData(void){
    cout<<"The id of the employee number "<<count<<" is :"<<id<<endl;
}

int main()
{
    Employee one, two, three;
    one.setData();
    one.getData();

    two.setData();
    two.getData();

    three.setData();
    three.getData();
    return 0;
}
