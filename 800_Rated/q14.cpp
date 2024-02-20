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
    int a,b,c;
    cin>>a>>b>>c;
    long long int sum=a+b+c;
    if(a>b)
    {
       cout<<"First\n";
    }
    else if(a<b)
    {
       cout<<"Second\n";
    }
    else if(a==b)
    {
       if(c%2!=0)
       {
          cout<<"First\n";
       }
       else{
          cout<<"Second\n";
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