#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    ll n,m,x,t,l,r,k=0,c=0;
    cin>>n;
    map<ll,ll>p;

    for(int i=0;i<n;i++)
    {
        cin>>x;
        p[x]++;
        if(p[x]!=1)
        {
            c++;
        }
        if(p[x]==1)
        {
            k++;
        }
    }

    if(c%2==1)
    {
        k--;
    }
    cout<<k;
}
