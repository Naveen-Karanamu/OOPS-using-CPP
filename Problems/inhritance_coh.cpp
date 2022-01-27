#include <iostream>
#include <math.h>
using namespace std;

class simpleCalc
{
protected:
    float s1, s2;

public:
    void setSimple(float a, float b)
    {
        s1 = a;
        s2 = b;
    }
    void getSimple()
    {
        cout <<endl<< "The DIVISION of the numbers " << s1 << " and " << s2 << " is :" << s1 / s2 << endl;
        cout << "The MULTIPLICATION of the numbers " << s1 << " and " << s2 << " is :" << s1 * s2 << endl;
        cout << "The ADDITION of the numbers " << s1 << " and " << s2 << " is :" << s1 + s2 << endl;
        cout << "The SUBTRACTION of the numbers " << s1 << " and " << s2 << " is :" << s1 - s2 << endl;
    }
    
};

class sciCalc
{
protected:
    float c1, c2;

public:
    void setSciCalc(float a, float b)
    {
        c2 = b;
        c1 = a;
    }
    void getSciCalc()
    {
        cout <<endl<< "The " << c1 << " exponent of the " << c2 << " is :" << pow(c1, c2) << endl;
        cout << "The " << c2 << " exponent of the " << c1 << " is :" << pow(c2, c1) << endl;
        cout << "The sqare roots of " << c1 << " and " << c2 << " are :" << sqrt(c1) << " & " << sqrt(c2) << endl;
        cout << "The logerithm of " << c1 << " and " << c2 << " are :" << log(c1) << " & " << log(c2) << endl;
    }
};

class hybridCalc : public simpleCalc, public sciCalc
{
public:
    void result()
    {
        cout << "The calculations of the Simple calculator are :" << endl;
        getSimple();
        cout <<endl<< "The calculations of the Scientific calculator are :" << endl;
        getSciCalc();
    }
};

int main()
{
    float a, b, c, d;
    cout << "Enter the inputs for the simple calculator" << endl;
    cin >> a >> b;
    cout << "Enter the inputs for the scientific calculator" << endl;
    cin >> c >> d;
    hybridCalc h1;
    h1.setSimple(a, b);
    h1.setSciCalc(c, d);
    h1.result();

    return 0;
}