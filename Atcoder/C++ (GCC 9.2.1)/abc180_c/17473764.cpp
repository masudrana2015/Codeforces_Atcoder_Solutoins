#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll m=LLONG_MIN,n,c=0,s=0,t=0;
    ll a[10000];
    cin>>n;

    for(ll i = 1; i <= sqrt(n); i++)
    {
       if(n%i==0)
       {
           if(n/i==i)
           {
               a[c++] = i;
           }
           else
           {
               a[c++] = i;
               a[c++] = n/i;
           }
       }
    }

    sort(a,a+c);

    for(int i = 0; i < c; i++)
    {
        cout<<a[i]<<endl;
    }
}

