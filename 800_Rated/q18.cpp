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
    int x,k;
    cin>>x>>k;
    int a=0;
    int b=0;
    if(x%k!=0)
    {
        cout<<"1"<<endl;
        cout<<x<<endl;
    }
    else{
        cout<<"2"<<endl;
        for(int i=x-1;i>=1;i--)
        {
            if(i%k==0)
            {
                continue;
            }
            else{
                a=i;
                b=x-i;
                if(b%k!=0 && b!=k)
                {
                    cout<<a<<" "<<b<<endl;
                    break;
                }
                else{
                    continue;
                }
            }
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