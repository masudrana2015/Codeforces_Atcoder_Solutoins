#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,c=0,t;
    double t1;
    string s,s1,s2;
    cin>>s>>s1;
    s2 = s+s1;
    n = stoi(s2);
    t = sqrt(n);
    t1 = sqrt(n);
    if(t==t1)
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
    }



}
