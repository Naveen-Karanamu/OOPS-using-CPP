#include <iostream>
using namespace std;

template <class T>
class vector
{
public:
T *arr;
int size;
vector(int x){
    size=x;
    arr=new T[size];
}
T add(vector v){
    T d=0;
    for(int i=0;i<size;i++){
        d+=this->arr[i]*v.arr[i];
    }
    return d;
}
};

int main()
{
    vector<int>v1(2);
    v1.arr[0]=1;
    v1.arr[1]=2;
    vector<int>v2(2);
    v2.arr[0]=3;
    v2.arr[1]=4;
    float i=v1.add(v2);
    cout<<i<<endl;    

    return 0;
}