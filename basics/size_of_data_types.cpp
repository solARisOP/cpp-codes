#include <iostream>
using namespace std;

int main()
{
    float a = 89.8f;
    long double b = 89.8l;
    /* here f, l (you can use F, L) are type declaration for float and long double
    beacause when you pass the pass the value it will require a type declaration to specify ,
    otherwise the computer will take it as double*/
    
    cout<<"89.8    "<<sizeof(89.8)<<endl; /*as u can se it took 89.8 value as double by default*/
    cout<<"89.8f   "<<sizeof(a)<<endl;
    cout<<"89.8F   "<<sizeof(89.8F)<<endl;
    cout<<"89.8l   "<<sizeof(b)<<endl;
    cout<<"89.8L   "<<sizeof(89.8L)<<endl; 

    return 0;
}