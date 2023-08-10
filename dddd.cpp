#include <bits/stdc++.h>
using namespace std;

int solve(int i, int l, vector<int> nums, int n, int t, vector<vector<int>> &dp, unordered_map<int, int> &mp)
{
    if(i == n-1)
    {
        if(nums[i] != nums[l]) return 1;
        else return t+1;
    }

    if(l == -1){}
    else if (dp[i][l] != -1) return dp[i][l];

    int mini = INT_MAX;

    for(int i = 0; i<n; i++)
    {
        int x;
        if(!mp[i])
        {
            if((l >= 0) && (nums[i] == nums[l]))
            {
                mp[i] = 1;
                x = 1 + solve(i+1, i, nums, n, t, dp, mp);
            }
            else
            {
                mp[i] = 1;
                x = 1 + t + solve(i+1, i, nums, n, t, dp, mp);
            } 
            mp[i] = 0;
        }
        if(x<mini) x = mini;
    }

    return dp[i][l] = mini;
}

int andrew(vector<int> nums, int n, int t)
{
    vector<vector<int>> dp(n, vector<int>(n, -1));
    unordered_map<int, int> mp;
    return solve(0, 0, nums, n, t, dp, mp);
}

int main()
{
    vector<int> g = {1,1,2,3};
    cout<<andrew(g, 4, 2);
    return 0;
}