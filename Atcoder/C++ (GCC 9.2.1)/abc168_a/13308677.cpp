#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll m,n,ts,a,b,f=0;
    string s;
    cin>>s;
    if(s[s.size()-1]=='2' || s[s.size()-1]=='4' || s[s.size()-1]=='5' || s[s.size()-1]=='7' || s[s.size()-1]=='9' )
    {
       cout<<"hon\n";
    }
    else if(s[s.size()-1]=='0' || s[s.size()-1]=='1' || s[s.size()-1]=='6' || s[s.size()-1]=='8')
    {
        cout<<"pon\n";
    }
    else if(s[s.size()-1]=='3')
    {
       cout<<"bon\n";
    }




}
