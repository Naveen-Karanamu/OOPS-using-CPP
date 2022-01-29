#include<iostream>
using namespace std;

class Complex{
    private:
    int a, b;
    public:

    Complex(int x, int y){
        a=x;
        b=y;
        cout<<a<<" + "<<b<<"i"<<endl;
    }
};

int main()
{
    // inplicit call
    Complex c1(1,2);

    // Explicit call
    Complex c2=Complex(3,4);
    

    return 0;
}