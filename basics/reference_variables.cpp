#include <iostream>
using namespace std;

int main()
{
    float x  = 88;
    float &y = x; /* here y is refering to x, both of their values will be same*/

    cout<<x<<endl;
    cout<<y<<endl;
    return 0;
}