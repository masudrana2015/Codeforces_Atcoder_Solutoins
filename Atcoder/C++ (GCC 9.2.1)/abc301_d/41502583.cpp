#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    ll n,m,t=998244353,l,r,k,tc,c,x;

    cin>>tc;

    while(tc--)
    {
        cin>>n;

        c=0,k=0;

        for(int i=sqrt(n); i>=1; i--)
        {
            x=n/i;
            l=x-i;

            if(x<i)
            {
                continue;
            }

            if(i==1)
            {
                c+=l*3;
                c++;
            }
            else
            {
                c+=l*9;
                c+=4;
                c+=(i-2)*3;
                c+=k*6;

                k+=l;
            }

            c%=t;
        }

        cout<<c%t<<endl;
    }
}
