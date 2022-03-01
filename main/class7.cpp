#include <iostream>
using namespace std;

class shopitem
{
    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void getdata(void)
    {
        cout << "Code of this item is " << id << endl;
        cout << "Price of this item is " << price << endl;
    }
};

int main()
{
    int s = 2, a;
    float b;
    shopitem(*ptr) = new shopitem[s];
    // shopitem(*ptrx) = ptr;// its pointing to the first objrct in ptr.
    for (int i = 0; i < s; i++)
    {
        cout << "Enter the id and price of the item" << i + 1 << endl;
        cin >> a >> b;
        (ptr+i)->setdata(a, b);
        // ptr++;
    }
    for (int i = 0; i < s; i++)
    {
        (ptr+i)->getdata();
        // ptrx->getdata(); we can also implement this by declaring ptrx on above.
        // ptrx++;
    }

    return 0;
}