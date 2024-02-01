#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll m,n,p,x=0,t,d,g,a,b;
    cin>>n>>m>>p;
    d = n;
    for(int i = 0;i < m;i++)
    {
        cin>>a>>b;
        n -= (a-x);
        //cout<<" cgfgh "<<n<<endl;
        if(n <= 0)
        {
            break;
        }
        n += b - a;
        n = min(d,n);
        //cout<<"  trttyuty "<<n<<endl;
        t = p - b;
        x = b;
    }

    n -= t;

    if(n > 0)
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
    }






}
