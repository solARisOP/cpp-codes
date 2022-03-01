#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }

    void sumdata(complex i, complex j) // like here u can also pass objects to the fuctions.
    {
        a = i.a + j.a;
        b = i.b + j.b;
    }

    void printdata()
    {
        cout << "The complex number is " << a << "+i" << b << endl;
    }
};

int main()
{
    complex c1, c2, c3;

    c1.setdata(3, 2);
    c1.printdata();

    c2.setdata(6, 6);
    c2.printdata();

    c3.sumdata(c1, c2);
    c3.printdata();

    return 0;
}