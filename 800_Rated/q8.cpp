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
    int *a=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            flag=true;
            break;
        }
    }
    if(flag==true)
    {
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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