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
 
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}
 
void solve()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.pb(x);
    }
    int sum=n+1;
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        int x=sum-v[i];
        ans.pb(x);
    }
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
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