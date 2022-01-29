#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    // Defult constructor is important for making the compiler consider this default constructor at the prior, then later look into the required constructors. Because the constructor will be called while the object is made. If the compiler isn't able the decide which constructor to call then it can't make the object.
    Complex(){};
    Complex(int x, int y=2){
        a=x;
        b=y;
        cout<<a<<" + "<<b<<"i"<<endl;
    }
};

int main()
{
    Complex c1, c2;
    c1=Complex(1);
    c2=Complex(2,3);

    return 0;
}