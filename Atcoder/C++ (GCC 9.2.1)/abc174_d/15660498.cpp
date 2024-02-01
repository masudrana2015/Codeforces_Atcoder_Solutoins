#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll m,n,t = 0,a,b,c = 0,r = 0,w = 0;
    string s;
    cin>>n;
    cin>>s;
    for(int i = 0; i < n; i++)
    {
        if(s[i]=='R')
        {
            r++;
        }
    }

    //cout<<r<<endl;

    for(int i = 0; i < n; i++)
    {
        if(s[i]=='W')
        {
            if(r > 0)
            {
                c++,r--;
            }
        }
        else if(s[i]=='R')
        {
            r--;
            //cout<<r<<"  "<<i<<endl;
        }
    }

    cout<<c<<endl;
}
