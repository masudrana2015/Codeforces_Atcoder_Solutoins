#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    ll n,m,c=0,s,l,x;
    cin>>n>>m;
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=n; j++)
        {
            x=m-(i+j);

            //cout<<i<<" "<<j<<" "<<x<<endl;

            if(x>=0 && x<=n && i+j+x==m)
            {
                c++;
            }
        }
    }

    cout<<c;
}
