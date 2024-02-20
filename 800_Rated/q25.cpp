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
    int i=0,j=n-1;
    while(i<j)
    {
        if(s[i]=='0' && s[j]=='1' || s[i]=='1' && s[j]=='0')
        {
            n-=2;
        }
        else{
            break;
        }
        i++;
        j--;
    }
    cout<<n<<endl;
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