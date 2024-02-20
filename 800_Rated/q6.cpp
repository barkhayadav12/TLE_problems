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
    int *a=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    map<int,int>mpp;
    for(int i=0;i<n;i++)
    {
        mpp[a[i]]++;
    }
    if(mpp.size()==1)
    {
        cout<<"YES\n";
    }
    else if(mpp.size()>2)
    {
        cout<<"NO\n";
    }
    else{
        vector<int>v;
        for(auto i:mpp)
        {
            v.pb(i.second);
        }
        int x=v[0];
        int y=v[1];
        if(x==y || x==(y-1) || (x-1)==y)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"No\n";
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