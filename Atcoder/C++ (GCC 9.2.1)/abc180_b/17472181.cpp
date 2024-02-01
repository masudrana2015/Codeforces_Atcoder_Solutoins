#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll m=LLONG_MIN,n,c,s=0,t=0;
    double d,l=0;
    cin>>n;
    ll a[n+10];
    for(int i = 0;i < n;i++)
    {
        cin>>a[i];
    }
    for(int i = 0;i < n;i++)
    {
        s += llabs(a[i]);
        m = max(m,llabs(a[i]));
    }
    for(int i = 0;i < n;i++)
    {
        l += a[i]*a[i];
    }

    cout<<s<<endl;
    d = sqrt(l);
    cout<<fixed<<setprecision(9)<<d<<endl;
    cout<<m<<endl;




}

