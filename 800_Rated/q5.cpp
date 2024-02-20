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
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a[i]=x;
    }
    if(isSorted(a))
    {
        cout<<"YES\n";
    }
    else{
    if(a[0]!=1)
    {
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
    }
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