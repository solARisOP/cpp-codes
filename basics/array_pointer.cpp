#include <iostream>
using namespace std;

int main()
{
    int marks[4] = {2,5,98,54};
    int* ptr = marks;
    
    for (int i=0; i < 4; i++)
    {
        cout<<*ptr<<endl;
        *ptr++;
    }
  
    return 0;
}