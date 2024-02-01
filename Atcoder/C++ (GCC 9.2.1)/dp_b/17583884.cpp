#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll m,n,c,x,t,k;
    cin>>n>>k;
    ll a[n+10],b[n+10];
    memset(b,0,sizeof(b));

    for(int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }

    b[1] = 0;
    //b[0] = 0;

    for(ll i = 2; i <= n; i++)
    {
        m = INT_MAX;
        for(ll j = 1; j <= min(i-1,k); j++)
        {
            x = llabs(a[i-j]-a[i]) + b[i-j];
            m = min(x,m);
        }

        b[i] += m;
    }

    cout<<b[n]<<endl;
}
