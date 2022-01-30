// There are many function of vectors available

#include<iostream>
#include<vector> //Header file for using vectors
using namespace std;

template <class t>
void display(vector<t> &v){
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

int main()
{
    vector <int> v;
    int ele;

    for(int i=0;i<5;i++){
        cout<<"Enter the element to add :";
        cin>>ele;
        v.push_back(ele);
    }
    display(v);

    return 0;
}