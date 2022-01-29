// nesting is nothing but the function in function 

#include<iostream>
using namespace std;

class binary{
    private:
    string s;
    public:
    void getData();
    void checkData(void);
};

void binary :: getData(){
    cout<<"Enter ther required string"<<endl;
    cin>>s;
}

void binary :: checkData(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
        cout<<"It's not binary"<<endl;
        exit(0);
        }
    }
}

int main()
{
    binary n1;
    n1.getData();
    n1.checkData();


    return 0;
}