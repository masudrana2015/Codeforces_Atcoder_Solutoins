#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    string s;
    ll a=0,b;
    cin>>b;
    s = to_string(b);
    for(ll i = 0;i < s.size();i++)
    {
        a += s[i]-'0';
    }

    if(b%a==0)
    {
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }

}

