#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    ll n,m,t,l,r,x,k=0,tc,c=1;

    string s;
    cin>>s>>n;

    for(int i=s.size()-1; i>=0; i--)
    {
        if(s[i]=='1')
        {
            k+=c;
        }

        c*=2;
    }

    c/=2;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='?')
        {
            if(k+c<=n)
            {
                k+=c;
            }
        }

        c/=2;
    }

    if(k>n)
    {
        k=-1;
    }

     cout<<k;
}
