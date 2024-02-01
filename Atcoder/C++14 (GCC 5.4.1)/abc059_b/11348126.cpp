#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    int k,l;
    cin>>s>>s1;
    k = s.size();
    l = s1.size();

        if(k==l)
        {
            if(s[0]-'0' > s1[0]-'0')
            {
                cout<<"GREATER\n";
            }
            else if(s[0]-'0' < s1[0]-'0')
            {
                cout<<"LESS\n";
            }
            if(s[0]-'0' == s1[0]-'0')
            {
                cout<<"EQUAL\n";
            }


        }
       else  if(k < l)
        {

            cout<<"LESS\n";

        }
       else if(k > l)
        {

            cout<<"GREATER\n";
        }


}
