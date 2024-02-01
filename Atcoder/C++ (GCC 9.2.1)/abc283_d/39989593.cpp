#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    ll n,m,t,l,r,k,c,tc;

    string s;
    cin>>s;
    k=0,l=0,r=0;
    n=s.size();

    ll a[n+10][30];
    map<char,int>p;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            if(p[s[i]]==0)
            {
                t=s[i];
                a[l][t]=1;
                p[s[i]]=1;
            }
            else
            {
                k=1;
                break;
            }
        }
        else
        {
            if(s[i]=='(')
            {
                l++;
            }
            else
            {
                for(char ch='a';ch<='z';ch++)
                {
                   if(a[l][ch]==1)
                   {
                       a[l][ch]=0;
                       p[ch]=0;
                   }
                }

                l--;
            }
        }
    }

    if(k==0)
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
    }
}
