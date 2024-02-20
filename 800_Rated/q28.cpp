#include<bits/stdc++.h>
 
using namespace std;
 
#define pb push_back
typedef long long ll;
 
bool isSorted(vector<int>&v)
{
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i]>v[i+1])
        {
            return false;
        }
    }
    return true;
}
bool isEqual(vector<int>&v)
{
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i]!=v[i+1])
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    if(isEqual(v))
    {
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
        sort(v.begin(),v.end());
        vector<int>op;
        int i=0,j=v.size()-1;
        while(i<j)
        {
            op.pb(v[i]);
            op.pb(v[j]);
            i++;
            j--;
        }
        if(n%2!=0)
        {
            op.pb(v[i]);
        }
        for(auto i:op)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}