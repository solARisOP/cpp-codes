#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    //It is used to initialize the objects of its class
    //It is automatically invoked whenever an object is created
    //  we cannot refer to their address
    Complex(void); // Constructor declaration, it should have same name as of class.
    // they cannot return values and do not have return types
    // it should be declared in public section of class

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void) // ----> This is a default constructor as it accepts no parameters
// it takes default arguments like complex (int a);
{
    a = 0;
    b = 0;
    cout<<"Hello world"<<endl;
}

int main()
{
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}
