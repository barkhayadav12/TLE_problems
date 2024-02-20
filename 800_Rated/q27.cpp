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
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.pb(x);
    }
    int cnt=0;
    int sum=0;
    int cnt_one=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==2)
        {
            cnt++;
            sum+=a[i];
        }
        else if(a[i]==1)
        {
            cnt_one++;
        }
    }
    if(cnt_one==n)
    {
        cout<<"1"<<endl;
    }
    else if(cnt%2!=0)
    {
        cout<<"-1"<<endl;
    }
    else{
        int tot=sum/2;
        for(int i=0;i<n;i++)
        {
            if(a[i]==2)
            {
                sum-=a[i];
            }
            if(sum==tot)
            {
                cout<<i+1<<endl;
                break;
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