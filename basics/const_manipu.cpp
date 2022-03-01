#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int a = 4;
    /* a = 8; u cant write this because we have used constant for 'a'.
    so its value cannot be changed further if you write this it will throw an error*/
    int b = 5;
    int c = 67;
    int d = 5271;

    cout << "value of b " << b << endl;
    cout << "value of c " << c << endl;
    cout << "value of d " << d << endl;

    cout << "value of setw b " <<setw(4)<< b << endl;
    cout << "value of setw c " <<setw(4)<< c << endl;
    cout << "value of setw d " <<setw(4)<< d << endl; /*setw(number) gives the value the width length. */

    return 0;
}