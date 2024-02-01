#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll m,n,c=0,k,t,d;
    string s,s1;

    cin>>s>>s1;
    m = s1.size()+1;

    for(int i = 0; i < s.size(); i++)
    {
        c = 0,t = 0,k = i;

        for(int j = 0; j < s1.size(); j++)
        {
           if(s[k]!=s1[j])
           {
               c++;
           }

           t++,k++;
           if(k==s.size())
           {
               break;
           }
        }

        if(t==s1.size())
        {
            m = min(m,c);
        }
    }

    cout<<m<<endl;

}
