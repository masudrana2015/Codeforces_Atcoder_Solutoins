#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,c=0,t=0,b,s=0,f,g,d=0,x=0;
    cin>>n;
    ll a[n+10];
    for(int i = 0;i < n;i++)
    {
        cin>>a[i];
        s += a[i];
    }

    f = ceil(s*1.0/n);
    //cout<<f<<endl;
    g = (s/n);
    //cout<<g<<endl;


    for(int i = 0;i < n;i++)
    {
        t = abs(f-a[i]);
        t = t*t;
        c += t;
        //cout<<c<<endl;
    }
    for(int i = 0;i < n;i++)
    {
        d = abs(g-a[i]);
        d = d*d;
        x += d;
        //cout<<c<<endl;
    }
    cout<<min(c,x)<<endl;
}
