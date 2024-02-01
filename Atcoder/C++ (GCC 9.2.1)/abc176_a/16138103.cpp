#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll m=0,n,c=0,x,t;
    cin>>n>>x>>t;
    if(n%x==0)
    {
        cout<<(n/x)*t<<endl;
    }
    else
    {
        cout<<((n/x)*t) + t<<endl;
    }
}
