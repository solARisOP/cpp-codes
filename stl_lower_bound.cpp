#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12}; 
    int n =11;
    vector<int> vec;
    // lower_bound function 
    // returns an iterator pointing to the first
    // element which is not less than x
    // arr[] -> {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12} 
    // x = 10
    // else returns an iterator pointing to the end, if
    // the element is not present.
    // this works in log N 
    int x =10;
 
    auto it = lower_bound(arr, arr+n, x); 
    int ind = it - arr;
 
    auto it2 = lower_bound(vec.begin(), vec.end(), x); 
    int ind2 = it2 - vec.begin();
 
    ind2 =  lower_bound(vec.begin(), vec.end(), x) - vec.begin(); 
 
    return 0;
}