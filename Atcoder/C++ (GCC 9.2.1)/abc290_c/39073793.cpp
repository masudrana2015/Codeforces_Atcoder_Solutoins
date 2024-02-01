#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    ll n,x,t,l,r,k,c;

    cin>>n>>k;
    l=0;

    ll a[n+10];
    map<ll,ll>p;

    for(int i=1;i<=n;i++)
    {
        cin>>x;
        p[x]++;

        if(p[x]==1)
        {
            a[++l]=x;
        }
    }

    sort(a+1,a+l+1);

    c=0;

    for(int i=1;i<=min(k,l);i++)
    {
        if(a[i]==c)
        {
            c++;
        }
        else
        {
            break;
        }
    }

    cout<<c<<endl;
}
