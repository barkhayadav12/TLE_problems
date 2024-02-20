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
 
bool isEqual(vector<int>&v)
{
    int x=v[0];
    for(int i=1;i<v.size();i++)
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
    map<int,int>mpp;
    vector<int>a;
    vector<int>b;
    vector<int>res;
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.pb(x);
    }
    sort(v.begin(),v.end());
    if(isEqual(v))
    {
        cout<<"-1"<<endl;
    }
    else{
        for(int i=0;i<n;i++)
        {
            mpp[v[i]]++;
        }
        for(auto i:mpp)
        {
            res.pb(i.second);
            ans.pb(i.first);
        }
        int mid=ans.size()/2;
        for(int i=0;i<mid;i++)
        {
            int x=res[i];
            if(x>1){
            while(x>0)
            {
                a.pb(ans[i]);
                x--;
            }
            }
            else{
                a.pb(ans[i]);
            }
        }
        for(int i=mid;i<ans.size();i++)
        {
            int x=res[i];
            if(x>1){
            while(x>0)
            {
                b.pb(ans[i]);
                x--;
            }
            }
            else{
                b.pb(ans[i]);
            }
        }
        cout<<a.size()<<" "<<b.size()<<endl;
        for(auto i:a)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        for(auto i:b)
        {
            cout<<i<<" ";
        }
        cout<<endl;
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