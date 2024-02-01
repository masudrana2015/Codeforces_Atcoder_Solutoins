#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
ll c[100404][40],d[100000];
//map<pair<ll,ll>,ll>d;
int main()
{
    ll n,m=1,x,t,l,r,k,s=0;

    cin>>n>>k;

    ll a[n+10],b[n+10],c[n+10][35][4];


    for(int i=1; i<=n; i++)
    {
        cin>>a[i]>>b[i];
    }

    for(int i=0; i<=30; i++)
    {
        c[0][i][0]=0;
        c[0][i][1]=1;
    }

    for(int i=0; i<30; i++)
    {
        for(int j=1; j<=n; j++)
        {
            l=a[j],r=b[j];

            t=r>>i;
            t=t&(ll)1;

            if(l==1)
            {
                c[j][i][0]=(c[j-1][i][0])&t;
                c[j][i][1]=(c[j-1][i][1])&t;
            }
            else if(l==2)
            {
                c[j][i][0]=(c[j-1][i][0])|t;
                c[j][i][1]=(c[j-1][i][1])|t;
            }
            else
            {
                c[j][i][0]=(c[j-1][i][0])^t;
                c[j][i][1]=(c[j-1][i][1])^t;
            }
        }
    }

    for(int i=1; i<=n; i++)
    {
        s=0;

        for(int j=0; j<30; j++)
        {
            t=k>>j;
            t=t&(ll)1;

            x=c[i][j][t];

            if(x==1)
            {
                x=powl(2,j);

                s+=x;
            }
        }

        cout<<s<<endl;
        k=s;
    }

}

