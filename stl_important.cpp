#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n =10;
    int arr[n] = {4,5,3,6,2,7,8,9,4,2};
    vector<int> vec;
 
 
    int el = *max_element(arr, arr+n);  // max element for an array or vector
    int el = *min_element(arr, arr+n);  // min element for an array or vector
 
 
    int el = *max_element(vec.begin(), vec.end()); 
    int el = *min_element(vec.begin(), vec.end()); 
 
 

 
    // accumulate(startIterator, endIterator, initialSum);
    int sum = accumulate(arr, arr+n, 0);  // sum of an array or vector, the third input in the function is the initial sum we assign.
    int sum = accumulate(vec.begin(), vec.end(), 0);
 
 
 
    // count(firstIterator, lastIterator, x) 
    int cnt = count(arr, arr+n, 1); // count of a particular element, the third input in the function is the particular element we want to get the count of.
    int cnt = count(vec.begin(), vec.end(), 1); 

    auto it = find(arr, arr+n, 2); // return an iterator 
    // pointing to the first instance of 2, or else it 
    // returns pointing to the end() if 2 is not there 

    int ind = it - arr; // gives the index of the element
    // where arr is the begin iterator or pointer pointing
    // to the first element of the array.
    return 0;
}