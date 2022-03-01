#include <iostream>
#include <vector>

using namespace std;
template <class T>
void display(vector<T> &v)
{

    for (int i = 0; i < v.size(); i++)
    {
        cout<<"the "<<i+1<<" element of the vector is "<<v.at(i)/*  v[i] is also correct  */<<endl;

    }
    
}

int main()
{
    // int x, size;
    // cout<<"enter size of the vector "<<endl;
    // cin>>size;
    vector <int>v1;  
    // for (int i = 0; i <size; i++)
    // {
    //     cout<<"Enter the element "<<endl;
    //     cin>>x;
    //     v1.push_back(x); // its for adding element at the end in that vector.
    // }
    // // v1.pop_back(); // its for deleting last element in that vector.

    // vector<int> :: iterator s = v1.begin(); // its an iterator its pointing to the first element of the vector.
    // v1.insert(s/* or 's+0' */,5, 87); // here its pointing to the first element of the vector before the first element it adds 87
    //                        // the middle number here tells how many 87's you want to inert in the vector.
    // display(v1);

    vector<char> v2(4);  //4-element character vector
    vector<char> v3(v2);//4-element character vector from v2
    vector<int> v4(6,3); //6-element vector of 3s
    display(v4);
  
    return 0;
}