#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    ll n,m,t,l,r,s=0,c,x;

    cin>>n;

    map<int,ll>p;

    for(int i=1; i<=n; i++)
    {
        x=i;
        c=0;

        for(int j=1; j<=sqrt(x); j++)
        {
            if(x%j==0)
            {
                t=x/j;
                //cout<<x<<"  "<<t<<endl;

                if(t==j)
                {
                    c++;
                }
                else
                {
                    c+=2;
                }
            }
        }

        p[i]=c;
        //cout<<i<<" "<<p[i]<<endl;
    }

    for(int i=1; i<n; i++)
    {
        //cout<<i<<" "<<p[i]<<" "<<p[n-i]<<endl;

        s+=(p[i]*p[n-i]);
    }

    cout<<s;
}
