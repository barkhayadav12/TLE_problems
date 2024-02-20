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
 
bool allZero(vector<int>&v)
{
    int x=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]!=x)
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
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.pb(x);
    }
    int tot=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==0)
        {
            cnt++;
        }
        else if(v[i]==1){
            cnt=0;
        }
        tot=max(tot,cnt);
    }
    cout<<tot<<endl;
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