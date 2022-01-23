#include<iostream>
using namespace std;

class Num{
    public :
    Num(){
        cout<<"Constructor called"<<endl;
    }
    // Destructor doesn't take or return any arguments
    // Initializing destructor
    ~Num(){
        cout<<"Destructor called"<<endl;
    }

};

int main()
{
    cout<<"Main function"<<endl;
    Num n1;

    return 0;
}