#include<iostream>
using namespace std;

int main()
{
    try{
        throw 1;
    }catch(...){ //" ... " lets any data type to be catched.
        cout<<"Error"<<endl;
    }

    return 0;
}