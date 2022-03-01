#include <iostream>
using namespace std;

int count = 0; // created a global variable.

class num
{
public:
    num()
    { // constructor
        count++;
        cout << "This is the time when constructor is called for object number" << count << endl;
    }

    ~num()
    { // destructor --> neither it takes a value nor returns one.
        cout << "This is the time when my destructor is called for object number" << count << endl;
        count--;
    }
};
int main()
{ // ***
    cout << "We are inside our main function" << endl;
    cout << "Creating first object n1" << endl;
    num n1;
    {   // here the curly braces are a block as soon as the block exists the object inside destroys to free up memory.
        // *** its same like the curly brace of main function.
        // *** In main fuction also as soon as we exit the braces the objects destroys for freeing up the memory.
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main" << endl;
    return 0;
}
