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
    string s;
    cin>>s;
    int cnt=0;
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='.')
        {
            cnt++;
        }
        if(i>0 && i<n-1)
        {
            if(s[i-1]=='.' && s[i]=='.' && s[i+1]=='.')
            {
                cout<<"2"<<endl;
                flag=true;
                break;
            }
        }
    }
    if(flag==false)
    {
        cout<<cnt<<endl;
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