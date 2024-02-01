#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll m,n;
    double t;
    cin>>m;
    if(m%2!=0)
    {
        n = m/2;
        n += 1;
        t = n*1.0/m;
        cout<<fixed<<setprecision(10)<<t<<endl;
    }
    else
    {
        n = m/2;
        t = n*1.0/m;
        cout<<fixed<<setprecision(10)<<t<<endl;
    }

}
