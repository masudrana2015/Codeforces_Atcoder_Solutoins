#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll m,n,ts,a,b,f=0;
    string s;
    cin>>n>>s;
    if(s.size() <= n)
    {
        cout<<s<<endl;
    }
    else
    {
        for(int i = 0;i < n;i++)
        {
            cout<<s[i];
        }
        cout<<"...";

    }




}
