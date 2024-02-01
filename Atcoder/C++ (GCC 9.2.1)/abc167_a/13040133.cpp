#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    string s,s1;
    char ch;
    cin>>s>>s1;
    ch = s1[s1.size()-1];

    s += ch;

    if(s==s1)
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
    }

}
