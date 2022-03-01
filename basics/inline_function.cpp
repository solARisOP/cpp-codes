#include <iostream>
using namespace std;

inline int product(int a, int b)
{
    return a*b;
}
//  inline function saves the time by actually placing the full function on the fiunction call,
//  by this the values doesn't make copies of it again and while we call them multiples times. But we cannot use them in big programmes it will
// eat our computer cache more and more.
int main()
{
    int a, b;
    cin>>a>>b;

    cout<<"product of a & b is "<<product(a,b)<<endl;
    cout<<"product of a & b is "<<product(a,b)<<endl;
    cout<<"product of a & b is "<<product(a,b)<<endl;
    cout<<"product of a & b is "<<product(a,b)<<endl;
    cout<<"product of a & b is "<<product(a,b)<<endl;
    cout<<"product of a & b is "<<product(a,b)<<endl;
    cout<<"product of a & b is "<<product(a,b)<<endl;
    cout<<"product of a & b is "<<product(a,b)<<endl;
    cout<<"product of a & b is "<<product(a,b)<<endl;
    cout<<"product of a & b is "<<product(a,b)<<endl;
    cout<<"product of a & b is "<<product(a,b)<<endl;


    return 0;
}