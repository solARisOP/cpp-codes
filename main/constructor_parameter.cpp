#include <iostream>
using namespace std;


class Complex
{
    int a, b;

public:

    Complex(int, int); 
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y) // it is parameterized consructor as it takes parameters(int's) as an input. 
{
    a = x;
    b = y;
}

int main()
{
    // implicit call
    Complex a(5,7);// constructor function calls are like this.
    a.printNumber();

    // explicit call
    Complex b = Complex (3,9);
    b.printNumber();
    

    return 0;
}