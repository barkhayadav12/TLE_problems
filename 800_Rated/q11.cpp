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
    int minNum=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(minNum>abs(v[i]))
        {
            minNum=(abs(v[i]))-0;
        }
    }
    cout<<minNum<<endl;
}
 
int main()
{
    solve();
}