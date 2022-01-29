#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string str="hello world";
    ofstream out;
    out.open("text.txt");
    out<<str;
    out.close();

    string s;
    ifstream in;
    in.open("text.txt");
    // in>>s;
    // cout<<s;

    while(in.eof()==0){ //eof is the end of the file
        getline(in,s);
        cout<<s;
    }
    in.close();

    return 0;
}