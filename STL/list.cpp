#include <iostream>
#include <list>
using namespace std;

void display(list<int> &li)
{
    list<int>::iterator iter;
    for (iter = li.begin(); iter != li.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
}

int main()
{
    list<int> li;
    li.push_back(1);
    li.push_back(3);
    li.push_back(2);
    display(li);

    li.sort();
        display(li);


    li.remove(3);

    display(li);

    li.pop_back();

    display(li);

    return 0;
}