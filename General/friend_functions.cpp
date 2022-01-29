#include<iostream>
using namespace std;

class Complex{
    int a, b;
    friend Complex sumComplex(Complex o1, Complex o2);
    public:
    void setData(int v1,int v2){
        a=v1;
        b=v2;
    }
    void getData(Complex o1, Complex o2){
        cout<<a<<" + "<<b<<"i"<<endl;
    }
};

Complex sumComplex(Complex o1, Complex o2){
    cout<<o1.a+o2.a<<" + "<<o1.b+o2.b<<"i"<<endl;
}

int main()
{
    Complex c1, c2, sum;
    c1.setData(1,2);
    c2.setData(3,4);
    sum=sumComplex(c1,c2);

    return 0; 
}