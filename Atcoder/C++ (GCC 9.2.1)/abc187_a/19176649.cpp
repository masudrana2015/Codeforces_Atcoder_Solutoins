#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll m,n,t=0,x=0,r;
    cin>>n>>m;
    while(n!=0)
    {
        r = n%10;
        t += r;
        n /= 10;
    }
    while(m!=0)
    {
        r = m%10;
        x += r;
        m /= 10;
    }
    cout<<max(x,t);
}
