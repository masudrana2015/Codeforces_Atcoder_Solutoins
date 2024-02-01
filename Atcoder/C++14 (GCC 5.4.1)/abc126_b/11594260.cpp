#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int m,y;
    m = (s[0]-'0')*10+s[1]-'0';
    y = (s[2]-'0')*10+s[3]-'0';
    if(m <= 12 && y <= 12 && m!=0 && y!=0)
    {
        cout<<"AMBIGUOUS\n";
    }
    else if(m <= 12 && y >= 0 && m!=0)
    {
        cout<<"MMYY\n";
    }
    else if(m >= 0 && y <= 12 && y!=0)
    {
        cout<<"YYMM\n";
    }
    else
    {
        cout<<"NA\n";
    }
}
