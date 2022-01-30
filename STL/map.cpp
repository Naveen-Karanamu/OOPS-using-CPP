#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<string, int> marks;
    marks["Naveen"]=90;
    marks["Sai"]=100;
    marks["Avi"]=89;

    map<string, int>::iterator it;

    for(it=marks.begin();it!=marks.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }   

    return 0;
}