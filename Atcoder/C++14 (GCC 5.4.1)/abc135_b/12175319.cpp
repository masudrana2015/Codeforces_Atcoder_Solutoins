#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,g,x,t,h,k=0,f,l=0,c=0;
    cin>>n;
    ll a[n+10],b[n+10];

    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
        b[i] = a[i];

    }

    sort(a,a+n);

    for(int i = 0; i < n; i++)
    {
        if(a[i]!=b[i])
        {
            c++;
        }

    }
    if(c > 2)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
    }


}
