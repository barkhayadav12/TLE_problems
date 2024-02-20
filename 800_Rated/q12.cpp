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
   vector<int>ans;
   ans.pb(v[0]);
   for(int i=1;i<n;i++) 
   {
      if(v[i]<v[i-1])
      {
        ans.pb(v[i]);
        ans.pb(v[i]);
      }
      else{
        ans.pb(v[i]);
      }
   }
   cout<<ans.size()<<endl;
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