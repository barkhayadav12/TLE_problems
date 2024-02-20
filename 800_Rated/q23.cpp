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
    long long int a,b;
    cin>>a>>b;
    long long int c,d;
    cin>>c>>d;
    long long int cnt=0;
    if(b<=d)
    { 
        if(b<d){
        while(b!=d)
        {
            a+=1;
            b+=1;
            cnt++;
        }
        }
        if(c>a)
        {
            cout<<"-1"<<endl;
        }
        else{
            while(a!=c)
            {
                a-=1;
                cnt++;
            }
            cout<<cnt<<endl;
        }
    }
    else if(b>d)
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