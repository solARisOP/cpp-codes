#include <iostream>
using namespace std;

float moneyreceived(int money, float factor= 1.04)
{
    return money*factor;
}
// here factor is a default argument, if we dont give function an argument it will take factor as an default argument.
int main()
{
    int money =  100000;
    cout<<"money recieved after one year "<<moneyreceived(money)<<endl;
    cout<<"money recieved for VIP's after one year "<<moneyreceived(money, 1.1)<<endl;

    return 0;
}