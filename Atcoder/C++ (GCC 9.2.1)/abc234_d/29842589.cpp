#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    ll n,m,l,r,c,k;
    cin>>n>>k;
    ll a[n+10];

    set<int>s;

    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }

    for(int i=1; i<=k; i++)
    {
        s.insert(a[i]);
    }

    auto t=s.begin();
    cout<<*t<<endl;

    for(int i=k+1; i<=n; i++)
    {
        //cout<<" \n"<<a[i]<<endl;
        s.insert(a[i]);
        if(a[i]<*t)
        {
            cout<<*t<<endl;
        }
        else
        {
            t++;
            cout<<*t<<endl;
        }
    }
}
