#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    ll n,tc,x,t,ans,c,l,r;

    //cin>>tc;

    //while(tc--)
    {
        string s;

        cin>>s;

        ans=0;

        for(int i=0; i<s.size(); i++)
        {
            ans=ans*26+(s[i]-'A'+1);
        }

        cout<<ans<<endl;
    }
}
