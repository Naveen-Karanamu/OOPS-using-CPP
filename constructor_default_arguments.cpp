#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    
    Complex(int x, int y=2){
        a=x;
        b=y;
        cout<<a<<" + "<<b<<"i"<<endl;
    }
};

int main()
{
    Complex c1(1), c2(2,3);

    return 0;
}