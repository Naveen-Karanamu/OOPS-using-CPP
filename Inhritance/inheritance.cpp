#include <iostream>
using namespace std;

class Person
{
public:
    int id;
    Person(){};
    Person(int x)
    {
        id = x;
    }
};

class Student : public Person
{
public:
    Student(int a)
    {
        id = a;
    };
};

int main()
{
    Student s1(1);
    cout<<s1.id<<endl;
    return 0;
}