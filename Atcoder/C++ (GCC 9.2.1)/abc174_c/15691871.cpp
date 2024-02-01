#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll m,n,x = -1,t=0;

    cin>>n;

    for(int i = 1; i <= 1e7; i++)
    {
        t = (t*10+7)%n;
        if(t==0)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<x<<endl;
}
