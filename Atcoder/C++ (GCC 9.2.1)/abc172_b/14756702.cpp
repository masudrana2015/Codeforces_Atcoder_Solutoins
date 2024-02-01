#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll a=0;
    string s,s1;

    cin>>s>>s1;
    for(int i = 0;i < s.size();i++)
    {
        if(s[i]!=s1[i])
        {
            a++;
        }
    }
    cout<<a;

}


