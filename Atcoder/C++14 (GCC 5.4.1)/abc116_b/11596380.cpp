#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll pass(ll m)
{
    ll t=1,b[100000];
    memset(b,0,sizeof(b));
    b[m] = -1;
    while(1)
    {
        if(m%2==0)
        {
            m /= 2;
        }
        else
        {
            m = m*3+1;
        }
        //cout<<" m "<<m<<endl;
        if(b[m]==-1)
        {
            t++;
            cout<<t<<endl;
            break;
        }
        else
        {
            b[m] = -1;
            t++;
        }
    }
}
int main()
{
    int m;
    cin>>m;
    pass(m);
}
