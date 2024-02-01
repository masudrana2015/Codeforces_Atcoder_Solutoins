#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    ll n,m,c=0,t,l,x;
    cin>>n>>m;
    ll a[n+10];
    memset(a,0,sizeof(a));
    map<ll,ll>p;
    p[(ll)0]++;

    for(int i=1; i<=n; i++)
    {
        cin>>x;
        a[i]+=x;
        a[i]+=a[i-1];
        //p[a[i]]++;
        x=a[i]-m;
        //cout<<a[i]<<" "<<p[x]<<endl;

        //if(p[x]>=1)
        {
            c+=p[x];
        }
        //else if(x==m)
        {
            //c++;
        }

        p[a[i]]++;
    }

    cout<<c;
}
