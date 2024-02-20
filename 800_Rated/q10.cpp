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
    int a[10][10];
    for(int i=0;i<10;i++)
    {
        a[0][i]=1;
        a[i][0]=1;
        a[i][9]=1;
        a[9][i]=1;
    }
    for(int i=1;i<9;i++)
    {
        a[1][i]=2;
        a[i][1]=2;
        a[i][8]=2;
        a[8][i]=2;
    }
    for(int i=2;i<8;i++)
    {
        a[2][i]=3;
        a[i][2]=3;
        a[i][7]=3;
        a[7][i]=3;
    }
    for(int i=3;i<7;i++)
    {
        a[3][i]=4;
        a[i][3]=4;
        a[i][6]=4;
        a[6][i]=4;
    }
    for(int i=4;i<6;i++)
    {
        a[4][i]=5;
        a[i][4]=5;
        a[i][5]=5;
        a[5][i]=5;
    }
    char ch[10][10];
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            cin>>ch[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(ch[i][j]=='X')
            {
                sum+=a[i][j];
            }
        }
    }
    cout<<sum<<endl;
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