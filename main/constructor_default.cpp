#include <iostream>
using namespace std;

class simple
{
    int a, b, c;

public:
    simple(int x, int y= 2){
        a =x;
        b =y;
        c= 3;
    }

    void display()
    {
        cout<<"the value of a, b and c are "<<a<<", "<<b<<", "<<c<<endl;
    }
};    

int main()
{
    simple c(1,4);
    c.display();
    return 0;
}