#include <iostream>
using namespace std;

class Y;

class X
{
    int data;
    friend void add(X,Y);
    public:
        void setvalue(int value)
        {
            data = value;
        }
};

class Y
{
    int num;
    friend void add(X,Y);
    public:
        void setvalue(int value)
        {
            num = value;
        }
};

void add (X o1, Y o2)
{
    cout<<"summing data of X and Y objects gives me "<<o1.data + o2.num<<endl;
}
int main()
{
    X a;
    a.setvalue(3);

    Y b;
    b.setvalue(6);

    add(a,b);

    return 0;
}