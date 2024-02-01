#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    ll n,m,x,l,r,t;
    cin>>n>>m;

    multiset<int>s;

    vector<pair<int,int>>v(n+10),v1(m+10);

    for(int i=0;i<n;i++)
    {
        cin>>v[i].first;
        v[i].first*=-1;
    }


    for(int i=0;i<n;i++)
    {
        cin>>v[i].second;
    }

    for(int i=0;i<m;i++)
    {
        cin>>v1[i].first;
        v1[i].first*=-1;
    }

    for(int i=0;i<m;i++)
    {
        cin>>v1[i].second;
    }

    sort(v.begin(),v.end());
    sort(v1.begin(),v1.end());


    t=0;

    for(int i=0;i<n;i++)
    {
        l=v[i].first;

        while(t<m)
        {
            x=v1[t].first;
            r=v1[t].second;

            if(l>=x)
            {
                s.insert(r);
                //cout<<l<<" "<<r<<endl;
            }
            else
            {
                break;
            }
                

            t++;
        }

        r=v[i].second;

        auto k=s.lower_bound(r);

        if(k==s.end())
        {
            cout<<"No";
            return 0;
        }

        s.erase(k);
    }

    cout<<"Yes";

}
