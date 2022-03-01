#include <iostream>
using namespace std;

template <class T> //This is a template - from one specified class we can further initialise its data types as our wish as shown below.
class vector
{
public:
    T *arr;
    int size;

    vector(int m)
    {
        size = m;
        arr = new T(size);
    }

    T product(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i]; // here this-> is pointing to v1's "arr". v1 has called this function.
        }
        return d;
    }
};

int main()
{
    vector<int> v1(3); // its the syntax for template's data initialization.
    v1.arr[0] = 2;
    v1.arr[1] = 16;
    v1.arr[2] = 1;

    vector<int> v2(3);
    v2.arr[0] = 3;
    v2.arr[1] = 10;
    v2.arr[2] = 12;

    int a = v1.product(v2);
    cout << a << endl;

    return 0;
}