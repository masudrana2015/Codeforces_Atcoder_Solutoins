#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    ll n,m,x,l,r,k,c;
    cin>>n;

    ll a[n+10],b[n+10],d[n+10];
    map<ll,ll>p,q,t;
    c=0;

    for(ll i=1;i<=n;i++)
    {
        cin>>x;
        d[i]=x;
        q[x]++;

        if(q[x]==1)
        {
            c++;
            p[x]=i;
            t[x]=n+1;
        }

        a[i]=c;
    }

    q.clear();
    c=0;

    for(ll i=1;i<=n;i++)
    {
        cin>>x;
        q[x]++;

        if(q[x]==1)
        {
            c++;
        }

        b[i]=c;

        t[x]=min(t[x],i);
    }

     q.clear();

     k=0;

    for(ll i=1;i<=n;i++)
    {
        x=d[i];

        k=max({k,p[x],t[x]});

        //cout<<k<<" ";

        q[i]=k;
    }

    //cout<<endl;

    cin>>m;

     while(m--)
    {
        cin>>l>>r;

        x=max(l,r);

        //cout<<a[l]<<" "<<b[r]<<endl;

        if(a[l]!=b[r])
        {
            cout<<"No\n";
        }
        else
        {
            if(q[l]<=x)
            {
                cout<<"Yes\n";
            }
            else
            {
                cout<<"No\n";
            }
        }
    }
}
