#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,m,k=0,x,f,t,a,b;
    cin>>m;
    string s;
    set<string>g;
    for(int i = 0;i < m;i++)
    {
        cin>>s;
        g.insert(s);
    }
    cout<<g.size()<<endl;



}
