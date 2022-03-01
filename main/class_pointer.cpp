#include <iostream>
using namespace std;

class comp{
    int r, i;
    public:
        void setdata(int a, int b)
        {
            r = a;
            i = b;
        }

        void getdata()
        {
            cout<<"the value of r is : "<<r<<endl;
            cout<<"the value of i is : "<<i<<endl;
        }
};
int main()
{
    comp c1;
    comp* ptr = &c1;
    // (*ptr).setdata(5,6);
    // (*ptr).getdata(); - these can be written as below too. 
    ptr->setdata(4,5);
    ptr->getdata();

    //array of objects.
    comp (*ptr1) = new comp[4];
    ptr1->setdata(2,75); 
    ptr1->getdata();
    return 0;
}