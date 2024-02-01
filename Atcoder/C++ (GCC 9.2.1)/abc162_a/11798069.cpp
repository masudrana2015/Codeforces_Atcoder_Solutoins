#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main()
{
    string s;
    cin>>s;
    ll t=0;
    for(int i = 0;i < s.size();i++)
    {
        if(s[i]=='7')
        {
            t = 1;
            break;
        }
    }
    if(t==1)
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
    }
}
