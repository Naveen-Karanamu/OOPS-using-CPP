#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    void setData(int x, int y){
        a=x;
        b=y;
    }
    void sumComplex( Complex o1 , Complex o2){
        a=o1.a+o2.a;
        b=o1.b+o2.b;
    }
    void getData(){
        cout<<"The complex number is :"<<a<<" + "<<b<<"i"<<endl;
    }
};

int main()
{
    Complex c1,c2,sum;
    c1.setData(1,2);
    c2.setData(3,4);
    sum.sumComplex(c1,c2);
    sum.getData();

    return 0;
}