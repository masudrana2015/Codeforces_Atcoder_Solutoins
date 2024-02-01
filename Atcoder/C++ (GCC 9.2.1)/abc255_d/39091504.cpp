#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    ll n,m,t,l,r,k,x,c=0,s;
    cin>>n>>k;

    ll a[n+10];
    map<ll,ll>p,q;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);

    for(int i=0;i<n;i++)
    {
        c+=a[i];
        p[i]=c;
    }

    c=0;

    for(int i=n-1;i>=0;i--)
    {
        c+=a[i];
        q[i]=c;
    }

    for(int i=1;i<=k;i++)
    {
        cin>>x;

        l=lower_bound(a,a+n,x+1)-a;
        l--;

        //cout<<l<<" "<<p[l]<<" "<<q[l+1]<<endl;

        s=x*(l+1)-p[l];

        t=n-(l+1);
        r=q[l+1];
        r-=(x*t);

        s+=r;

        cout<<s<<endl;
    }
}
