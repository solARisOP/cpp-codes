#include <iostream>
using namespace std;

int main()
{
    int a= 8;
    int*b = &a;
    int**c = &b;

    cout<<"value of a    "<<a<<endl;
    cout<<"value of b    "<<b<<endl;
    cout<<"value of c    "<<c<<endl;
    cout<<"value of ad a "<<&a<<endl;
    cout<<"value of ad b "<<&b<<endl;
    cout<<"value of a    "<<*b<<endl;
    cout<<"value of b    "<<*c<<endl;
    cout<<"value of a    "<<**c<<endl;
    return 0;
}