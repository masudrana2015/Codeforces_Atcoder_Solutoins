#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main()
{
    ll m=0,n,c=0,x,t;
    cin>>n;
    ll a[n+10];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for(int i = 0; i < n-1; i++)
    {
        if(a[i] > a[i+1])
        {
            c += a[i]-a[i+1];
            a[i+1] = a[i];
        }
    }

    cout<<c<<endl;

}
