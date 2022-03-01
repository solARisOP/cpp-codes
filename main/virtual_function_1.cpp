#include <iostream>
using namespace std;
class Base
{
public:
    int b = 4;
    virtual void display() /* As the pointer is of the base class, it will execute the display() of base class.
                              But by adding virtual here the class is telling the compiler that execute derived class display(),*/
                           
    {
        cout << "Dispalying Base class variable var_base " << b << endl;
    }
};

class Derived : public Base
{
public:
    int d = 8;
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

    ptr_b = &objd;
    ptr_b->display();

    return 0;
}    