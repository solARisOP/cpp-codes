#include <iostream>
using namespace std;

class shop
{
    int itemid[100];
    int price[100];
    int counter = 0; // you can make it as a function too, below given.

public:
    // void itemcounter(void) { counter = 0; } 
    void setprice(void);
    void display(void);
};

void shop ::setprice(void)
{
    cout << "Enter the Item id of item no. : " << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "Enter the price of item no. : " << counter + 1 << endl;
    cin >> price[counter];
    counter++;
}

void shop ::display(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of " << itemid[i] << " is " << price[i] << endl;
    }
}

int main()
{
    int item;
    cout << "Enter the no. of items u want to buy " << endl;
    cin >> item;
    shop laxmi;
    // laxmi.itemcounter(); --> its a call for the above counter function.

    for (int i = 0; i < item; i++)
    {
        laxmi.setprice();
    }
    laxmi.display();

    return 0;
}