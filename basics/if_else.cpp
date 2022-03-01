#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"enter the amount of savings ";
    cin>>a;

    if(a>=5000)
    {
        cout<<"neha\n";
    }
    else if(a>=2000)
    {
        cout<<"rhasmi\n";
    }
    else
    {
        cout<<"friends\n";
    }
    return 0;
}