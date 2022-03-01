#include <bits/stdc++.h>
using namespace std;

bool comp(int el1, int el2) {
	if(el1 > el2) {
		return true; 
	}
	return false; 
}
 
bool comp1(pair<int,int> el1, pair<int,int> el2) {
	if(el1.first < el2.first) {
		return true; 
	}
	if(el1.first == el2.first) {
		if(el1.second > el2.second) {
			return true; 
		}
	}
	return false; 
}

int main()
{
    int arr[10]= {2, 5, 2, 7, 5, 3, 5, 1, 6, 9};
    sort(arr, arr+10, comp); // it is a comparator, greater<int> is an example of inbuilt comparator.
    for(auto i: arr)
    {
        cout<<i<<" ";
    }
    
    return 0;
}