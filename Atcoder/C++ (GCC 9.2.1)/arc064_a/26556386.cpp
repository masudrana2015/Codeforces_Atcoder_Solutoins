#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    ll n,c=0,x,t;
    cin>>n>>x;
    ll a[n+10];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=1;i<n;i++)
    {
        if(a[i]+a[i-1]>x)
        {
            c+=(a[i]+a[i-1]-x);
            t=(a[i]+a[i-1]-x);
            if(t>a[i])
            {
                a[i]=0;
            }
            else
            {
                a[i]-=(a[i]+a[i-1]-x);
            }
            //cout<<a[i]<<endl;
        }
    }
    cout<<c;
}
