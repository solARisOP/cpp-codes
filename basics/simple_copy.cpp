#include <iostream>
using namespace std;
int c = 77;
int main()
{
    int a, b, c;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    c=a+b;
    cout<<::c<<endl; /* used :: for global value of c.*/
    return 0;
}