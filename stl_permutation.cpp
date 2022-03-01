#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    // Next Permutation 
    // string s = "abc"
    // all permutations are as follows: 
 
    // abc
    // acb 
    // bac
    // bca
    // cab
    // cba
 
 
    
    s = "bca"; 
    bool res = next_permutation(s.begin(), s.end()); // it returns true if next permutation exists
    // and then update your string to that next permutation.
 
    s = "cba";
    res = next_permutation(s.begin(), s.end()); // it will return false as next permutation doesn't exist.
 
    // if I give you any random string s = "bca"
    // i want you to print all the permutations 

    string s1 = "bca"; 
    sort(s1.begin(), s1.end()); // this makes the string as "abc"
    do {
    	cout << s1 << endl; 
    } while(next_permutation(s1.begin(), s1.end())); 
 
 
    int arr[] = {1, 6, 5}; 
    int n = 3; 
    sort(arr, arr + n); // this makes the array as {1, 5, 6}
    do {
    	for(int i = 0;i<n;i++) cout << arr[i] << " "; 
    	cout << endl; 
    } while(next_permutation(arr, arr+n)) ; 
    return 0;
}