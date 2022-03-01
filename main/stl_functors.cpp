#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{
    //funtion objects (functors) :A function wrapped in a class,
    // so that it is available like an object.

    int arr [] = {34,2,45,87,23,90};
    // sort(arr, arr+4); // it sorts the array in its default assending order manner, and it sorts first 4 intergers of the array as mentioned.
    sort(arr, arr+6, greater<int>()); // by mentioning greater() function it sorts in desending manner. It is a functor.
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}