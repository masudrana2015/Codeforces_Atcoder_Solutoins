#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
map<ll,ll>p;
int main()
{
    ll n,m,t,l,tc,r,k,c,x;

    scanf("%lld",&tc);

    while(tc--)
    {
        scanf("%lld%lld",&n,&m);

        m-=n*2;

        if(m<0)
        {
            printf("No\n");
        }
        else
        {
            t=n&m;

            if(t==0)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }

        }
    }
}
