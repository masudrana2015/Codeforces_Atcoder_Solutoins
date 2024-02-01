#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    int n,m,t,l,r,c,tc,k,x,d;

    cin>>n>>m>>t;
    vector<int>v[n+m+10];
    int a[n+m+10],p[n+m+10];
    memset(a,0,sizeof(a));
    memset(p,0,sizeof(p));

    for(int i=1; i<=t; i++)
    {
        cin>>l>>r;

        v[l].push_back(r);
        v[r].push_back(l);
    }

    queue<int>q;
    q.push(1);
    d=0;

    while(!q.empty())
    {
        x=q.front();
        p[x]=-1;

        for(int i=0; i<v[x].size(); i++)
        {
            k=v[x][i];

            if(p[k]!=-1)
            {
                 if(a[k]==0)
                {
                    a[k]=a[x]+1;
                }
                else
                {
                    a[k]=min(a[k],a[x]+1);
                }

                q.push(k);
            }
        }

        q.pop();

    }


    q.push(n+m);
    c=0;

    while(!q.empty())
    {
        x=q.front();
        p[x]=-1;

        for(int i=0; i<v[x].size(); i++)
        {
            k=v[x][i];

            if(p[k]!=-1)
            {
                if(a[k]==0)
                {
                    a[k]=a[x]+1;
                }
                else
                {
                    a[k]=min(a[k],a[x]+1);
                }

                q.push(k);
            }
        }

        q.pop();
    }

    c=0,d=0;

    for(int i=1;i<=n+m;i++)
    {
        if(i<=n)
        {
            d=max(d,a[i]);
        }
        else
        {
            c=max(c,a[i]);
        }
    }

    cout<<(c+d+1)<<endl;

}
