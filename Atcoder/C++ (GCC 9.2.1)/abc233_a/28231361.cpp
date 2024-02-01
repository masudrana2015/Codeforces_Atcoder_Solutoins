#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    ll n,m,c,x;
    cin>>n>>m;
    if(n>=m)
    {
        cout<<"0";
    }
    else
    {
        c=m-n;
        x=c/10;
        if(c%10!=0)
        {
            cout<<x+1<<endl;
        }
        else
        {
            cout<<x<<endl;
        }
    }
}
