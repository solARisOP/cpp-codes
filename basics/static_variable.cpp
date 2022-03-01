#include <iostream>
using namespace std;

int product(int a, int b)
{
    static int c = 0 ; // this line only be executed once.
    c=c+1; // from next time the functin runs, its value will be retained
    // the function never forgets a static variable.
    return a*b+c;
}

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