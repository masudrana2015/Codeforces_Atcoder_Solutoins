#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    int k,l;
    cin>>s;
    cin>>s1;
    //getchar();
    if(s.size()==s1.size())
    {
        for(int i = 0; i < s.size(); i++)
        {
            cout<<s[i]<<s1[i];
        }
    }
    else
    {
        for(int i = 0; i < s1.size(); i++)
        {
            cout<<s[i]<<s1[i];

        }
        k = s.size();
        cout<<s[k-1];
    }


}
