#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    ll n,m,x,t,l,r,c,k;
    cin>>n;

    string s="";

    for(int i=65;i>=0;i--)
    {
        x=powl(2,i);

        //cout<<x<<"  "<<(x&n)<<endl;

        if((x&n)!=0)
        {
            t=i;
            break;
        }
    }

    //cout<<t<<endl;

    for(int i=t;i>=0;i--)
    {
        x=powl(2,i);

        if((x&n)!=0)
        {
            s+="1";
        }
        else
        {
            s+="0";
        }
    }

    //reverse(s.begin(),s.end());

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            s[i]='2';
        }
    }

    cout<<s;
}
