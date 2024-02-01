#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    ll n,m,t,l,r,k,c,tc,x;
    //cin>>tc;

    //while(tc--)
    {
        map<ll,ll>p,q;

        cin>>n;
        ll a[n+10];

        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }

        cin>>m;

        ll b[m+10];

        for(int i=1;i<=m;i++)
        {
            cin>>b[i];
            p[b[i]]=2;
        }

        cin>>x;
        q[x]=-1;

        for(int j=x;j>=1;j--)
        {
            //cout<<" ldjf \n\n";

             for(int i=1;i<=n;i++)
            {
                if(p[j]!=2)
                {
                    if(q[j]==-1)
                    {
                        t=j-a[i];
                        q[t]=-1;
                        //cout<<t<<" ";
                    }
                }
            }
        }

        if(q[0]==-1)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
    }
}
