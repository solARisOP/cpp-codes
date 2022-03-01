#include <iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;

    int i=1;
    do
    {
        cout<<a<<" X "<<i<<" = "<<a*i<<endl;
        i++;        
    }while(i<=10);
    return 0;
}