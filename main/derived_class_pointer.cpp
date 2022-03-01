#include <iostream>
using namespace std;
class Base
{
public:
    int b;
    void display()
    {
        cout << "Dispalying Base class variable var_base " << b << endl;
    }
};

class Derived : public Base
{
public:
    int d;
    void display()
    {
        cout << "Dispalying Base class variable var_base " << b << endl;
        cout << "Dispalying Derived class variable var_derived " << d << endl;
    }
};

int main()
{
    Base *ptr_b;
    Base objb;
    Derived *ptr_d;
    Derived objd;

    ptr_b = &objd; // Pointing base class pointer to derived class.
    //  Yes in c++ we can do this, but we cannot access any derived class members or function as our pointer is of base class.

    ptr_b->b = 34;
    // ptr_b->d= 134; // This  will throw an error, because its a base class pointer it cannot acces variables of derived class. 
    ptr_b->display(); // base display fuction will run because the pointer is of base class.

    // ptr_b->b = 3400; // here it will update the previous value of 34 by 3400.
    // ptr_b->display();

    ptr_d = &objd;
    ptr_d->b = 9448;
    ptr_d->d = 98;
    ptr_d->display(); // derived display fuction will run because the pointer is of derived class.

    return 0;
}
