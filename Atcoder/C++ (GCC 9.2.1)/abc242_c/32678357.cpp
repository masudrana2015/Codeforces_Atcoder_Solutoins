#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
ll b[1048576][10]={0};
#define l 998244353
int main()
{
    ll n,m,x,t,r,k,c=0;
    cin>>n;


    for(int i=1; i<=9; i++)
    {
        b[1][i]=1;
    }

    for(int i=2; i<=n; i++)
    {
        for(int k=1; k<=9; k++)
        {
            for(int j=max(k-1,1); j<=min(9,k+1); j++)
            {
                b[i][j]+=b[i-1][k];
                b[i][j]%=l;
            }
        }
    }

    for(int i=1; i<=9; i++)
    {
        c+=b[n][i];
        c%=l;
    }

    cout<<c;
}
