#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    ll n,m,x,t;
    cin>>n>>m>>x;

    //if(n!=0)
    {
        n--;
    }

    t=(m/x)-(n/x);
    //cout<<t<<endl;
    if(n<0 && x!=1)
    {
        t++;
    }
    cout<<t;
}
