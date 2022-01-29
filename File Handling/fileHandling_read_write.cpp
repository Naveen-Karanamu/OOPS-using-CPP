/*
File handling can be done by using some inbuilt classes and function by c++
-fstreambase
-ifstream -> derived from the fstreambase
-ofstream -> derived from the fstreambase
*/

/*
In order to work with files in c++ we have to open it. For this we have 2 ways:
-Using the constructor
- Using the member function open() of the class
*/

#include<iostream>
#include<fstream> //header file for file handling
using namespace std;

int main()
{
     string s="hello world";
    //  Opening the file using the constructor and writting it
    ofstream out("text.txt");
    out<<s; //This will over write the existing data on every run

    // Closing the file
    out.close();

    string str;
    ifstream in("text.txt");
    //in>>str; //This will only fetch the first word of the file

    getline(in,str); //This will fetch the whoie sentence of the file. To get the next sentence we have to run it again
    cout<<str;

    // closing the file
    in.close();

    return 0;
} 