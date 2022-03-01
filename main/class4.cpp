#include <iostream>
using namespace std;

class c2;

class c1
{
    int data;
    friend void swap(c1 &, c2 &);
    public:
        void setdata(int a)
        {
            data = a;
        }
        void display()
        {
            cout<<data<<endl;
        }
};

class c2
{
    int num;
    friend void swap(c1 &, c2 &);
    public:
        void setdata(int a)
        {
            num = a;
        }
        void display()
        {
            cout<<num<<endl;
        }
};

void swap(c1 &x, c2 &y)
{
    int temp = x.data;
    x.data = y.num;
    y.num = temp;
}

int main()
{
    c1 oc1;
    c2 oc2;

    oc1.setdata(3);
    
    oc2.setdata(40);

    swap(oc1,oc2);

    cout<<"the value after swap is ";
    oc1.display();
    cout<<"the value after swap is ";
    oc2.display();


    
    return 0;
}