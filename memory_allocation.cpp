#include <iostream>
using namespace std;

class Shop
{
private:
    int itemId[100];
    int itemPrice[100];
    int counter = 0;

public:
    void setPrice(void);
    void getPrice(void);
};

void Shop::setPrice(void)
{
    cout << "Enter the ID of your item number :" << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter the price of your item number :" << counter + 1 << endl;
    cin >> itemPrice[counter];
    counter++;
}
void Shop::getPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of the item with the id: " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop one;
    one.setPrice();
    one.setPrice();
    one.setPrice();
    one.setPrice();
    one.getPrice();

    return 0;
}