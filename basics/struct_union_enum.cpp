#include <iostream>
using namespace std;

typedef struct employee
{
    int eid;
    char fav_char ;
    float salary;
}ep;

typedef union currency
{
    float dollar;
    float inr;
    float pounds;
}curr;



int main()
{
    /********8structures********/

    ep rao;
    rao.eid = 44;
    rao.fav_char = 'i';
    rao.salary = 577.89;

    
    // cout<<rao.eid<<endl;
    // cout<<rao.fav_char<<endl;
    // cout<<rao.salary<<endl; 


    /*********union*********/

    // curr a;
    // a.dollar = 567.66; // in umion u can use only one data at a time 

    // cout<<a.dollar<<endl;

    /*********enum**********/

    enum meal{breakfast, lunch, dinner};
        meal m1 = lunch; // it has the default 0,1,2,3,..... as its value in its data
        cout<<m1<<endl; 

    return 0;
}