#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    ll n,m,t,l,r,k,tc,x;

    map<char,int>p;
    //cin>>tc;

    //while(tc--)
    {
        cin>>n>>k;

        ll a[n+10],b[n+10],c[n+10][k+150];
        c[1][0]=1;
        c[n][k]=0;

        for(int i=1; i<=n; i++)
        {
            cin>>a[i]>>b[i];
        }

        for(int i=1; i<=n; i++)
        {
            for(int j=0; j<=k; j++)
            {
                if(c[i][j]==1)
                {
                    c[i+1][j+a[i]]=1;
                    c[i+1][j+b[i]]=1;
                    //cout<<i<<" "<<(j+a[i])<<" "<<(j+b[i])<<endl;
                }
            }
        }

        if(c[n+1][k]==1)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
    }
}
