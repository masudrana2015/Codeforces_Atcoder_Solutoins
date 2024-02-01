#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,su=0;
    map<char,long long int>m;
    map<string,int>g;
    string s;
    cin>>n;
    getchar();
    for(int i = 0;i < n;i++)
    {
        cin>>s;
        if((s[0]=='M' || s[0]=='A' || s[0]=='R' || s[0]=='C' || s[0]=='H') && g[s]!=-1)
        {
            m[s[0]]++;
            g[s]=-1;
        }
    }
    if(m['M']!=0&& m['A']!=0 && m['R']!=0)
    {
        su += (m['M']*m['A']*m['R']);
    }
    if(m['M']!=0 && m['C'] && m['H'])
    {
        su += (m['M']*m['C']*m['H']);
    }
    if(m['M']!=0 && m['A'] && m['H'])
    {
        su += (m['M']*m['A']*m['H']);
    }
    if(m['M']!=0 && m['R'] && m['H'])
    {
        su += (m['M']*m['H']*m['R']);
    }
    if(m['M']!=0 && m['R'] && m['C'])
    {
        su += (m['M']*m['R']*m['C']);
    }
    if(m['M']!=0 && m['C'] && m['A'])
    {
        su += (m['M']*m['C']*m['A']);
    }
    if(m['R']!=0 && m['A']!=0 && m['C']!=0)
    {
        su += (m['A']*m['R']*m['C']);
    }
    if(m['A']!=0 && m['R'] && m['H'])
    {
        su += (m['A']*m['R']*m['H']);
    }
    if(m['C']!=0 && m['A']!=0 && m['H']!=0)
    {
        su += (m['A']*m['C']*m['H']);
    }
    if(m['H']!= 0 && m['C']!=0 && m['R']!=0)
    {
        su += (m['R']*m['C']*m['H']);
    }





    {
        cout<<su<<endl;
    }


}

