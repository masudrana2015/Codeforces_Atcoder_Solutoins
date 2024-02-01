#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;

map<int,int>p;
int main()
{
    int n,m,x,l,t,c=0;
    cin>>n;
    int a[n+19],b[n+10],d[n+10];
    b[0]=0,d[n+1]=0;

    m=0;
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
        m=__gcd(m,a[i]);
    }

    c=0;

    for(int i=1; i<=n; i++)
    {
        c=__gcd(c,a[i]);
        b[i]=c;
    }

    c=0;

    for(int i=n; i>=1; i--)
    {
        c=__gcd(c,a[i]);
        d[i]=c;
    }

    for(int i=1; i<=n; i++)
    {
        x=__gcd(b[i-1],d[i+1]);
        m=max(m,x);
    }

    cout<<m;
}
