#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll m,n,t = 0,a,b;
    double x;
    cin>>n>>m;
    for(int i = 0;i< n;i++)
    {
        cin>>a>>b;
        x = sqrt(a*a + b*b);
        //cout<<x<<endl;
        if(x <= m)
        {
            t++;
        }
    }
    cout<<t<<endl;
}
