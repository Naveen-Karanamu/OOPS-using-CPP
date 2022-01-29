#include <iostream>
using namespace std;

class Student
{
    int roll;

public:
    void setData(int r)
    {
        roll = r;
    }
    void getData()
    {
        cout << "The roll number of the student is :" << roll << endl;
    }
};

class Exam : public Student
{
    protected:
    int maths, english;

public:
    void setMarks(int m, int e)
    {
        maths = m;
        english = e;
    }
    void getMarks()
    {
        cout << "Maths :" << maths << endl
             << "English :" << english << endl;
    }
};

class Percent:public Exam{
public:
void getPer(){
    getData();
    getMarks();
    float per=(maths+english)/2;

    cout<<"The percentage is :"<<per<<endl;
}
};

int main()
{
    Percent s1;
    s1.setData(1);
    s1.setMarks(100,98);
    s1.getPer();

    return 0;
}