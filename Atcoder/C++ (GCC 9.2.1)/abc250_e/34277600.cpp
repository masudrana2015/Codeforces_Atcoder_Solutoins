#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    ll l,r,n,m,c;
    cin>>l>>r;
    if(l==r)
    {
        cout<<"1";
    }
    else
    {
        n=l-r;
        c=1;

        for(int i=1;i<=n;i++)
        {
            c*=32;
        }

        cout<<c;
    }
}
