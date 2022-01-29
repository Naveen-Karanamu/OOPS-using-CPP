#include<iostream>
using namespace std;

class Employee{
    int id;
    public:
    void setData(){
        cout<<"Enter the id of the employee"<<endl;
        cin>>id;
    }
    void getData(){
        cout<<"The id of the Employee is :"<<id<<endl;
    }
};

int main()
{
    Employee comp[5];
    for(int i=0;i<5;i++){
        comp[i].setData();
        comp[i].getData();
    }

    return 0;
}