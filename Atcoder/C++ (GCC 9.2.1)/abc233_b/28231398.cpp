#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    ll n,m,c,x;
    cin>>n>>m;
    string s;
    cin>>s;
    n--,m--;
    for(int i=0;i<n;i++)
    {
        cout<<s[i];
    }
    for(int i=m;i>=n;i--)
    {
        cout<<s[i];
    }
    for(int i=m+1;i<s.size();i++)
    {
        cout<<s[i];
    }
}
