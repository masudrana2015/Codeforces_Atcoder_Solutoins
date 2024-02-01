#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
map<pair<ll,ll>,ll>p,q;
int main()
{
    ll n,m,t,l,r,k,c=0,x,tc;

    cin>>n>>k;

    ll a[n+10],b[n+10];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        x=i%k;
        b[i]=a[i];
        p[{x,a[i]}]++;
        //cout<<a[i]<<" "<<x<<endl;
    }

    sort(b,b+n);

    for(int i=0; i<n; i++)
    {
        x=i%k;
        q[{x,b[i]}]++;

        //cout<<b[i]<<" "<<x<<endl;

        if(q[{x,b[i]}]>p[{x,b[i]}])
            {
                c=1;
                break;
            }
    }

    if(c==0){
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No";
    }
}
