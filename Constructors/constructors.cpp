#include<iostream>
using namespace std;

class Complex{
    private:
    int a, b;
    public:

    Complex(){
        a=10;
        b=10;
        cout<<a<<" + "<<b<<"i"<<endl;
    }
};

int main()
{
    Complex c1;
    

    return 0;
}