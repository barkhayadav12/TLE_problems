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
    int n,k,x;
    cin>>n>>k>>x;
    if(k-1==0)
    {
        cout<<"NO\n";
    }
    else{
        if(n%2==0)
        {
            if(x!=2)
            {
                cout<<"YES\n";
                cout<<n/2<<endl;
                for(int i=0;i<n/2;i++)
                {
                    cout<<"2"<<" ";
                }
                cout<<endl;
            }
            else if(x!=1)
            {
                cout<<"YES\n";
                cout<<n<<endl;
                for(int i=0;i<n;i++)
                {
                    cout<<"1"<<" ";
                }
                cout<<endl;
            }
        }
        else if(n%2!=0)
        {
            if(k>=3 && x!=3 && x!=2)
            {
                cout<<"YES\n";
                if(n%3!=0){
                if(n%3==1)
                {
                cout<<1+(n-3)/2<<endl;
                cout<<"3"<<" ";
                int rem=n-3;
                for(int i=0;i<rem/2;i++)
                {
                    cout<<"2"<<" ";
                }
                cout<<endl;
                }else{
                cout<<n/3+1<<endl;
                int tot=0;
                for(int i=0;i<n/3;i++)
                {
                    tot+=3;
                    cout<<"3"<<" ";
                }
                cout<<n-tot<<endl;
                }
                }
                else if(n%3==0)
                {
                cout<<n/3<<endl;
                for(int i=0;i<n/3;i++)
                {
                    cout<<"3"<<" ";
                }
                cout<<endl;
                }
            }
            else if(k<3 && x!=1 || k>=3 && x!=1)
            {
                cout<<"YES\n";
                cout<<n<<endl;
                for(int i=0;i<n;i++)
                {
                    cout<<"1"<<" ";
                }
                cout<<endl;
            }
            else if(k<3 && x==1)
            {
                cout<<"NO\n";
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