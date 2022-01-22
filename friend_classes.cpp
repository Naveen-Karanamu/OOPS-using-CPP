#include<iostream>
using namespace std;

class Complex;

class Calculator{
    public:
    void sumComplex(Complex o1, Complex o2);
}; 

class Complex{
    int a,b;
    friend void Calculator :: sumComplex(Complex o1, Complex o2);
    public:
    void setData(int v1, int v2){
        a=v1;
        b=v2;
    }
    void getData(){
        cout<<a<<" + "<<b<<"i"<<endl;
    }
};

void Calculator :: sumComplex(Complex o1, Complex o2){
        cout<<o1.a+o2.a<<" + "<<o1.b+o2.b<<"i"<<endl;
    }


int main()
{
    Complex c1, c2;
    c1.setData(1,2);
    c2.setData(3,4);
    Calculator calc;
    calc.sumComplex(c1,c2);

    return 0;
}