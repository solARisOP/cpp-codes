#include <iostream>
using namespace std;

int main()
{
    // Basic Example

    int a = 4;
    int *ptr = &a;
    // *ptr = 76;  //--> we can change the value of a like this.
    
    cout << "The value of a is " << *(ptr) << endl;

    // keyword --> new

    float *p = new float(40.78); // We created a float pointer “p” and dynamically created a float which has value “40.78”.
                                 //   and assigned that value to pointer “p”.
    cout << "The value at address p is " << *(p) << endl;
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20; // it can also be written as *(arr+1) = 20
    arr[2] = 30;

    // keyword --> delete

    // delete[] arr; //--> it frees the memory in the array

    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    return 0;
}
