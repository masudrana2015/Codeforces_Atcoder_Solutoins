#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,m,t=0;
    cin>>n;
    ll a[n+10];
    map<int,int>c;
    for(int i = 0;i < n-1;i++)
    {
        cin>>a[i];
        c[a[i]]++;

    }
    for(int i = 1;i <= n;i++)
    {
        cout<<c[i]<<endl;
    }


}
