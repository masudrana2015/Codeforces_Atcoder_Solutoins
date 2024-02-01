#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    ll n,m,x,t,l,r,k,c,tc;
    cin>>n>>k;

    ll a[n+10],b[n+10];
    map<int,int>p,q;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }

    t=1,c=0;
    p[n-1]=-1;
    q[n-1]=-1;

    for(int i=n-2;i>=0;i--)
    {
        c=0;

        if(p[i+1]==-1)
        {
            x=llabs(a[i]-a[i+1]);
            if(x<=k)
            {
                c=1;
                p[i]=-1;
            }

            x=llabs(b[i]-a[i+1]);
            if(x<=k)
            {
                c=1;
                q[i]=-1;
            }

        }
        if(q[i+1]==-1)
        {
            x=llabs(a[i]-b[i+1]);
            if(x<=k)
            {
                c=1;
                p[i]=-1;
            }

            x=llabs(b[i]-b[i+1]);
            if(x<=k)
            {
                c=1;
                q[i]=-1;
            }
        }

        if(c==0)
        {
            t=-1;
            break;
        }
    }

    if(t==1)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }


}


