#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    ll n,m,x,t,l,r,s=0,k;
    cin>>n>>k>>m;

    ll a[n+10];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);

    for(int i=n-1; i>=0; i--)
    {
        t=a[i]/m;
        t=min(t,k);

        a[i]-=(m*t);
        k-=t;
    }

    sort(a,a+n);

    for(int i=n-1; i>=0; i--)
    {
        t=a[i]/m;

        if((a[i]%m)!=0)
        {
            t++;
        }

        t=min(t,k);
        a[i]-=(m*t);
        k-=t;

        a[i]=max((ll)0,a[i]);
        s+=a[i];
    }

    cout<<s;



}
