#include<iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n];
        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int flag=0;
        for(long long i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                flag=1;
                cout<<0<<endl;
                break;
            }
        }
        if(flag==0)
        {
            long long min=1e10;
            for(long long i=0;i<n;i++)
            {
                if(a[i+1]-a[i]<min)
                {
                    min=a[i+1]-a[i];
                }
            }
            cout<<(min/2)+1<<endl;
        }
    }
}