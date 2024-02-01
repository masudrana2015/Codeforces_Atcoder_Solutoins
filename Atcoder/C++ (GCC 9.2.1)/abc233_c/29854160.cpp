#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
vector<vector<ll>>v;
ll k,s,n;
void pass(ll c,ll x)
{
    if(c==n)
    {
        if(k==x)
        {
            s++;
        }

        return;
    }

    for(int i=0; i<v[c].size(); i++)
    {
        if(x*v[c][i]>k)
        {
            continue;
        }
        pass(c+1,x*v[c][i]);
    }
}
int main()
{
    ll m,c,x,l,r,t=1;
    cin>>n>>k;
    //vector<vector<int>>v(n,vector<int>(m,0));
    v.resize(n);
    for(int i=0; i<n; i++)
    {
        cin>>l;
        v[i].resize(l);

        for(int j=0; j<l; j++)
        {
            cin>>v[i][j];
        }
    }

    pass(0,1);

    cout<<s;

}
