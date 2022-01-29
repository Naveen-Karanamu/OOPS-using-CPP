#include<iostream>
using namespace std;

template<class t1, class t2>
void avg(t1 a, t2 b){
    cout<<(a+b)/2;
}

int main()
{
    avg(2,2.5);

    return 0;
}