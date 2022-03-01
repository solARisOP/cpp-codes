#include <iostream>
using namespace std;

/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/

class Test
{
    int a;
    int b;
    // int a, b; --> the below syntax can get affected by this declaration order too.

public:
    //Test(int i, int j) : a(i), b(a + j). --> this will work
    //Test(int i, int j) : a(j), b(i). --> this will work
    //Test(int i, int j) : a(i), b(i+j). --> this will work
    //Test(int i, int j) : b(j), a(i+b). --> this wont work as we declared 'a' first in the class variable.
    Test(int i, int j) : a(i), b(j) // this is a different type of syntax for initilization of contructor arguments.
    {
        cout << "Constructor executed" << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}
