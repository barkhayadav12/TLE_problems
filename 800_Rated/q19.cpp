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
    int neg=0;
    int pos=0;
    int sum=0;
    int mult=1;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x<0)
        {
            neg++;
        }
        else{
            pos++;
        }
        sum+=x;
        mult*=x;
        v.pb(x);
    }
    int ans=0;
    while(!((pos-neg)>=0 && neg%2==0))
    {
       neg--;
       pos++;
       ans++;
    }
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