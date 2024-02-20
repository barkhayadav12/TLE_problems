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
    vector<int>v;
    for(int i=0;i<n;i++)  
    {
        int x;
        cin>>x;
        v.pb(x);
    }
    int cnt=0;
    for(int i=0;i<n-1;i++)
    {
        if((v[i]%2!=0 && v[i+1]%2==0) || (v[i]%2==0 && v[i+1]%2!=0))
        {
            continue;
        }
        else{
            cnt++;
        }
    }
    cout<<cnt<<endl;
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