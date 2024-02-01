#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
ll c,n;
vector<vector<ll>>v;
void pass(ll i,ll m)
{
    if(i==n)
    {
        if(m==1)
        {
            c++;

        }

        return;
    }

    //cout<<i<<endl;

    for(int j=0; j<v[i].size(); j++)
    {
        if(m%v[i][j]==0)
        {
            //cout<<v[i][j]<<" "<<m<<endl;
            pass(i+1,m/v[i][j]);
        }
    }
}
int main()
{
    ll m,x,l,t;
    cin>>n>>m;
    map<ll,ll>p;

    for(int i=1; i<=n; i++)
    {
        cin>>x;
        vector<ll>a(x);
        for(int j=0; j<x; j++)
        {
            cin>>a[j];
        }

        v.push_back(a);

    }

    pass((ll)0,m);
    cout<<c;
}

