#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    ll n,m,t,l,r,k,c,ans,mn;
    cin>>n>>t>>k;
    string s,s1="",s2="";

    cin>>s;

    m=s.size();
    mn=LLONG_MAX;

    for(int i=0; i<m; i++)
    {
        s1="";

        for(int j=i; j<m; j++)
        {
            s1+=s[j];
        }

        for(int j=0; j<i; j++)
        {
            s1+=s[j];
        }

        l=0,r=m-1;
        ans=0;
        c=0;

        while(l<r)
        {
            if(s1[l]!=s1[r])
            {
                c++;
            }

            l++,r--;
        }

        ans=c*k+i*t;

        mn=min(mn,ans);
    }
    
    cout<<mn;
}
