#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    int n,m,t,l,r,k,c,tc,x;

    //cin>>tc;

    //while(tc--)
    {
        cin>>n>>m;

        int a[n+10],b[m+10];
        c=0;

        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }

        for(int i=1; i<=m; i++)
        {
            cin>>b[i];
        }

        l=1,r=1e9+1;

        while(l<=r)
        {
            int md=(l+r)/2;

            //cout<<md<<endl;

            c=0;

            for(int i=1; i<=n; i++)
            {
                if(a[i]<=md)
                {
                    c++;
                }
            }

            for(int i=1; i<=m; i++)
            {
                if(b[i]>=md)
                {
                    c--;
                }
            }

            if(c>=0)
            {
                r=md-1;
                t=md;
            }
            else
            {
                l=md+1;
            }
        }

        cout<<t<<endl;
    }
}
