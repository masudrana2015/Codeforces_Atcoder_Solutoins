#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main()
{
    ll m=0,n,c=0,x,t;
    string s;
    cin>>s;
    for(int i = 0;i < s.size();i++)
    {
        c += s[i]-'0';
    }

        //c += (((s[t-3]-'0')*10)+s[t-2]-'0')*10+s[t-1]-'0';
        if(c%9==0)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }

}
