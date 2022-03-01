#include <iostream>
using namespace std;

int main()
{
    int a,b,i,z=0;
    cin>>a>>b;
    for(a; a<=b; a++)
    {
        for(i=2; i<a; i++)
        {
            if(a%i==0)
            {
                break;
            }
        }
        if(i==a)
        {
            cout<<a<<endl;
            z++;
        }
    }
    cout<<"The no. of 'prime numbers' between "<<a<<" and "<<b<<" are : "<<z<<endl;
    return 0;
}