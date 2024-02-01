#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,m,k=0,g,x,f,t,a,b;
    cin>>m>>n>>a>>b;
    x = ceil(a*1.0/n);
    f = ceil(m*1.0/b);
    if(x <= f)
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
    }


}
