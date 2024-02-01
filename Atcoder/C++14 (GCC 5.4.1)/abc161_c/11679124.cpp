#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int b,c,n,m,s=0,re;
    cin>>n>>m;
    re = n%m;
    b = abs(re-m);
    //cout<<re<<" "<<b<<endl;
    if(re <= b)
    {
        cout<<re<<endl;
    }
    else
    {
        cout<<b<<endl;
    }


}


