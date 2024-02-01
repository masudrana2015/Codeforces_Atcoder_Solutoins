#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,b,l,e,k,t=0;
    cin>>n;

    for(ll i = 1;i <= n;i++)
    {
        if(i%3!=0 && i%5!=0)
        {
            t += i;
        }
    }
    cout<<t<<endl;

}
