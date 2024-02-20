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
    int n,m;
    cin>>n>>m;
    string x;
    cin>>x;
    string s;
    cin>>s;
    int i=0;
    bool flag=false;
    while(i<=5)
    {
        if(x.find(s)!=string::npos)
        {
            cout<<i<<endl;
            flag=true;
            break;
        }
        i++;
        x.append(x);
    }
    if(flag==false)
    {
        cout<<"-1"<<endl;
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