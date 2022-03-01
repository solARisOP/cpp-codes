#include <iostream>
using namespace std;

template<class t>
void swapp(t &a, t &b)
{
    t temp = a;
    a=b;
    b=temp;
    
}

template<class t1, class t2>

float avg(t1 a, t2 b) //Our function has become general for all sorts of data types.
{
    float c = (a+b)/2.0;
    return c;
}

int main()
{
    int x = 7, y = 8;
    swapp(x,y);
    cout<<x<<endl<<y<<endl;
    float a = avg(3,4.677);
    cout<<a<<endl;
    return 0;
}