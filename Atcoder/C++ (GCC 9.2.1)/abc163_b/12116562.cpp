#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,m,t=0;
    cin>>n>>m;
    ll a[m+10];
    for(int i = 0;i < m;i++)
    {
        cin>>a[i];
        t += a[i];
    }
    m = n-t;
    if(m < 0)
    {
        cout<<"-1\n";
    }
    else
    {
        cout<<m<<endl;
    }

}
