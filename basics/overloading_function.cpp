#include <iostream>
using namespace std;

int volume(int l, int b, int h)
{
    return l * b * h;
}

int volume(int a)
{
    return a * a * a;
} 

// its called overloading a function, here i have given same function name to three function,
  //    but because of c++ optimisation the arguments are taken nicely

int volume(int r, int h)
{
    return 3.14 * r * r * h;
}
int main()
{
    cout << "the volume of cube of side 3 : " << volume(3) << endl;
    cout << "the volume of cuboid of length 3, breadth 4, height 2 : " << volume(3, 4, 2) << endl;
    cout << "the volume of cylinder of radius 3, height 2 : " << volume(3, 2) << endl;
    return 0;
}