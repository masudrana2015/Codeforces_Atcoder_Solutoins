#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll m,n,c=0,k,t,x=0,s=0;

    cin>>n;
    ll a[n+10];

    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    t = a[0];

    for(int i = 1; i < n; i++)
    {
        s += t*a[i];
        s = s%(ll)(1e9+7);
        t += a[i];
        t = t%(ll)(1e9+7);
    }

    cout<<s<<endl;
}
