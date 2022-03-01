#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int x, y;
    friend void distance(Point, Point);

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
};

void distance(Point i, Point j)
{
    double d = sqrt(pow((i.x - j.x), 2) + pow((i.y - j.y), 2));
    cout << "the distance between (" << i.x << ", " << i.y << ") and (" << j.x << ", " << j.y << ") is " << d << endl;
}

int main()
{
    Point a(1, 0), b(70, 0);
    distance(a, b);

    return 0;
}