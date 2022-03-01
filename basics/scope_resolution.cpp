#include <iostream>
using namespace std;
int c = 67;

int main()
{
    int c= 78;
    c= 34;
    cout<<::c<<endl;/*by putting '::' we are giving prefernce to global variable.*/
    return 0;
}