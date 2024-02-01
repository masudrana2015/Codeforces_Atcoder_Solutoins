#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll a,b,m,ts,s=0,n;

    cin>>n;
    map<ll,ll>p;

    for(int i = 0;i < n;i++)
    {
        cin>>a;
        s += a;
        p[a]++;
    }

    cin>>ts;

    while(ts--)
    {
        cin>>a>>b;
        s -= p[a]*a;
        s += p[a]*b;
        p[b] += p[a];
        p[a] -= p[a];
        cout<<s<<endl;
    }
}

