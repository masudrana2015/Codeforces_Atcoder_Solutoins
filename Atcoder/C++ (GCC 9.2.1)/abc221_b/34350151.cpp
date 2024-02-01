#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    ll t,c=0;
    string s,s1;
    cin>>s>>s1;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=s1[i])
        {
            c++;

            if(c==1)
            {
                t=i;
            }
            else if(c==2)
            {
                if(t==i-1)
                {
                    swap(s[i],s[t]);
                }

                break;
            }

        }
    }

    if(s==s1)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }


}
