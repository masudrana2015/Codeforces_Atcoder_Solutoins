#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    ll n,m,x,t,l,r,k,c;
    cin>>n>>k;

    string s;
    cin>>s;

    t=1;

    while(k--)
    {
        cin>>l>>r;

        if(l==1)
        {
            t-=r;

            if(t<=0)
            {
                t=n+t;
            }
        }
        else
        {
            r--;
            x=t+r;

            if(x<=n)
            {
                cout<<s[x-1]<<endl;
            }
            else
            {
                c=x-n;

                cout<<s[c-1]<<endl;
            }
        }



    }


}
