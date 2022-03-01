#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> v(10, vector<int>(20, 0));
    vector<vector<vector<int>>> c(10, vector<vector<int>>(20, vector<int>(30, 0)));

    stack <int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    
    cout<<st.top()<<endl;
    q.pop();
    cout<<q.back();

    int n;
    cin>>n;
    map<int, int> m;
    int maxi = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        m[x]++;
        if(m[x]>m[maxi])
        {
            maxi = x;
        }
    }
    cout<<maxi;

    int n;
    cin>>n;
    multiset<int>ms;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        ms.emplace(x);
    }
    
    for(auto i : ms)
    {
        cout<<i<<"  ";
    }
    

    return 0;
}