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
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.pb(x);
    }
    int ans=v[0]-0;
    for(int i=0;i<v.size()-1;i++)
    {
        int a=v[i+1]-v[i];
        ans=max(ans,a);
    }
    int b=2*(k-v[v.size()-1]);
    ans=max(b,ans);
    cout<<ans<<endl;
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