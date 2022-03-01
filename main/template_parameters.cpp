#include <iostream>
using namespace std;

template <class t1, class t2> // we can have multiple parameters one, two or more.

class my
{
    t1 x;
    t2 y;

public:
    my(t1 a, t2 b)
    {
        x = a;
        y = b;
    }

    void display()
    {
        cout << this->x << endl
             << this->y;
    }
};

int main()
{
    my<int, char> o(77, '@');
    o.display();
    return 0;
}