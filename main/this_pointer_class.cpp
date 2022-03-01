/*
#include <iostream>
using namespace std;
class A
{
    int a;

public:
    void setData(int a)
    {
        this->a = a; // its is used when the variable of the class and the argument of the function is of same name.
    }

    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    A x;
    x.setData(4);
    x.getData();
    return 0;
}
*/
#include <iostream>
using namespace std;

class A
{
    int a;

public:
    A &setData(int a)
    {
        this->a = a;   // this pointer points to the object which calls the member function.
        return *this;  // it returns an object to the main function.
    }

    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    A a;
    a.setData(4).getData(); // we can directly put getdata here as the setdata fuction returned an object.
    return 0;
}
