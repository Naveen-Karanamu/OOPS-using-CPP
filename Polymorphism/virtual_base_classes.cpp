// If A->b & A->C then B->d and c->D
// Then the D will get the members of A twice from B and C
//There we will be getting the ambiguity
// So we will inherit the A as a virtual base class to resolve this ambiguity
#include <iostream>
using namespace std;

class student
{
protected:
    int roll;

public:
    void setRoll(int r)
    {
        roll = r;
    }
    void printRoll()
    {
        cout << "The roll number of the student is :" << roll << endl;
    }
};

class academics : virtual public student
{
protected:
    int mpc, non_mpc;

public:
    void setMarks(int a, int b)
    {
        mpc = a;
        non_mpc = b;
    }
    void printMarks()
    {
        cout << "The MPC marks of the student " << roll
             << " is :" << mpc << endl
             << "The non MPC marks of the student " << roll << " is :" << non_mpc << endl;
    }
};

class sports : virtual public student
{
protected:
    int score;

public:
    void setScore(int c)
    {
        score = c;
    }
    void printScore()
    {
        cout << "The sports marks of the student " << roll << " is :" << score << endl;
    }
};

class result:public sports, public academics{
protected:
int tot;
public:
void total(){
    tot=mpc+non_mpc+score;
    printRoll();
    printMarks();
    printScore();
    cout<<"The total marks of the student "<<roll
    <<" is :"<<tot<<endl;
}
};

int main()
{
    result s1;
    s1.setRoll(1);
    s1.setMarks(90, 85);
    s1.setScore(95);
    s1.total();
    return 0;
}