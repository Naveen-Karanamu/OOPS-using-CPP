#include<iostream>
using namespace std;

int main()
{
    try{
        try{
            throw 0;
        }catch(int x){
            throw x;
        }
    }catch(int y){
        cout<<y;
    }

    return 0;
}