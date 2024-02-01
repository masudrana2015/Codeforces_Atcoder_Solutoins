#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    ll t,c=0,l,n,m=0,x,r;
    string s,s1="",s2="";
    cin>>s;

    sort(s.begin(),s.end());
    reverse(s.begin(),s.end());

    n=s.size();
    c=n/2;

    t=powl(2,n);
    t--;

    for(ll i=1; i<=t; i++)
    {
        x=i;
        s1="",s2="";

        for(int j=0; j<n; j++)
        {
            l=powl(2,j);

            r=x&l;

            //cout<<x<<" "<<l<<" "<<r<<endl;

            if(r==0)
            {
                s1+=s[j];
            }
            else
            {
                s2+=s[j];
            }
        }


        if(s1.size()>0 && s2.size()>0)
        {
            //cout<<s1<<" "<<s2<<endl;

            r=stoll(s1);
            l=stoll(s2);

            m=max(m,r*l);
        }
    }

    cout<<m;


}

