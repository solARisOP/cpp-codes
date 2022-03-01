#include <iostream>
using namespace std;

int main()
{
    int i,n;
    cin>>n;
    if(n<=2)
    {
        cout<<"not required"<<endl;
    }
    else
    {
        for(i=2; i<n; i++)
        {
            if(n%i==0)
            {
                cout<<"not a prime"<<endl;
                break;
            }
        }
        if(i==n)
        {
            cout<<"prime"<<endl;
        }
    }        
    return 0;
}