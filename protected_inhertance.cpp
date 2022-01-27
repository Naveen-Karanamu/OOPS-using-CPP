#include<iostream>
using namespace std;

class base{
protected :
int a;
private :
int b;
};

/*
   Visibility mode :    Public           Private             Protected    
   Private members    Not inherited     Not inherited      Not inherited      
   Public Members      Public             private          Protected
   Protectd Members     Protected        Private             Protected       
*/


class derived : protected base{

};

int main()
{
    

    return 0;
}