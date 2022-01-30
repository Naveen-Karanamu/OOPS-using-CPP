// Functors

#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main()
{
    int arr[]={1,435,456,6,34,45,35};

    sort(arr,arr+7,greater<int>());
    for(int i=0;i<8;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}