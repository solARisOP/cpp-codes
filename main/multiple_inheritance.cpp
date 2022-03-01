#include <iostream>
using namespace std;

class base1
{
protected:
    int base_1;

public:
    void base1int(int a)
    {
        base_1 = a;
    }
};

class base2
{
protected:
    int base_2;

public:
    void base2int(int a)
    {
        base_2 = a;
    }
};

class base3
{
protected:
    int base_3;

public:
    void base3int(int a)
    {
        base_3 = a;
    }
};

class derived : public base1, public base2, public base3
{
public:
    void show()
    {
        cout << "the value of base 1 is : " << base_1 << endl;
        cout << "the value of base 2 is : " << base_2 << endl;
        cout << "the value of base 3 is : " << base_3 << endl;
        cout << "the value of sum is    : " << (base_1 + base_2 + base_3) << endl;
    }
};

int main()
{
    derived d;
    d.base1int(23);
    d.base2int(2);
    d.base3int(15);
    d.show();
    return 0;
}