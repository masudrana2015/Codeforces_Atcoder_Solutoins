#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int m,n,d,re,s=0;
    cin>>m;
    if(m < 500)
    {
        d = m/5;
        cout<<d*5<<endl;
    }
    else
    {
        re = (m%500);
        d = re/5;
        s += d*5;
        m -= re;
        s += m*2;
        cout<<s<<endl;
    }


}
