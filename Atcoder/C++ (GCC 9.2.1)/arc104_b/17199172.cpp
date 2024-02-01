#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll m=0,n,c=0,x=0,t=0;
    string s;
    cin>>n>>s;

    for(int i = 0; i < n; i++)
    {
        m = 0,t=0;

        for(int j = i; j < n; j++)
        {
            if(s[j]=='A')
            {
                m++;
            }
            if(s[j]=='T')
            {
                m--;
            }
            if(s[j]=='C')
            {
                t++;
            }
            if(s[j]=='G')
            {
                t--;
            }

            if(m==0 && t==0)
            {
                c++;
            }
        }
    }

    cout<<c;


}

