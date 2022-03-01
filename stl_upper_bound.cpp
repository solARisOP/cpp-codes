#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12}; 
    int n =11;
    vector<int> vec;

    // upper bound 
    // returns an iterator which points to an element which is 
    // just greater than x
    // arr[] -> {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12} 
    // x = 7 
    // x = 6 
    // x = 12 -> end() iterator 
    // x = 15 -> end() iterator 
    int x = 10;
    auto it = upper_bound(arr, arr+n, x); 
    int ind = it - arr; 
 
    auto it2 = upper_bound(vec.begin(), vec.end(), x); 
    int ind2 = it2 - vec.begin();
 
    ind2 =  upper_bound(vec.begin(), vec.end(), x) - vec.begin();
    return 0;
}