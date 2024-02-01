#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    ll n,m,x,l,r,k,c,tc,t;

    cin>>n>>m>>tc;
    ll a[5];
    memset(a,0,sizeof(a));
    a[1]=0;
    a[2]=n;
    a[3]=0;
    a[4]=m;

    while(tc--)
    {
        cin>>l>>r>>t;

        if(t==1)
        {
            a[1]=max(l,a[1]);
        }
        else if(t==2)
        {
            a[2]=min(l,a[2]);
        }
        else if(t==3)
        {
            a[3]=max(r,a[3]);
        }
        else if(t==4)
        {
            a[4]=min(r,a[4]);
        }
    }

    //cout<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<endl;
    if(a[1]>=a[2] || a[3]>=a[4])
    {
        cout<<"0";
        return 0;
    }

    t=(a[2]-a[1])*(a[4]-a[3]);

    if(t<0)
    {
        t=0;
    }
    cout<<t;

}
