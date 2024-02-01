#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    ll n,m,l,r,k,x,c,t;

    cin>>n>>l>>r;

    ll a[n+10];
    map<ll,ll>p,q;

    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }

    k=0,c=0;

    for(int i=1; i<=n; i++)
    {
        p[a[i]]++;
        q[a[i]]=i;

        //cout<<a[i]<<"  "<<l<<"  "<<r<<endl;

        if(a[i]>=r && a[i]<=l)
        {
            if(p[l]>=1 && p[r]>=1)
            {
                t=min(q[l],q[r]);
                x=t-k;
                c+=x;
            }

        }
        else
        {
            k=i;
            p.clear();
            q.clear();
        }
    }

    cout<<c;

}
