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
    long long int n,k;
    cin>>n>>k;
    if(n%2==0)
    {
        cout<<"YES\n";
    }
    else{
        long long int rem=(n-k)/2;
        long long int x=rem*2;
        long long int a=(n-x)%k;
        if(a==0)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
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