#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    ll n,m,x,t,l,r,k,c,tc;


    {
        cin>>n>>k;

        ll a[n+10],b[n+10];
        l=0;

        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }

        t=1;
        c=0;

        for(int i=1;i<=n;i++)
        {
            c+=a[i];
            b[i]=c;

            if(c>=k)
            {
                while(t<i)
                {
                    x=c-b[t];

                    if(x>=k)
                    {
                        t++;
                        //cout<<i<<" "<<t<<endl;
                    }
                    else
                    {
                        break;
                    }
                }

                l+=t;
               // cout<<c<<" c ll "<<l<<endl;
            }
        }

        cout<<l;

    }

}
