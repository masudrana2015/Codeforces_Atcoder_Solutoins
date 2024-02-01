#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll m,n;
    cin>>m>>n;
    if(n*2 < m)
    {
        cout<<m-(n*2)<<endl;
    }
    else
    {
        cout<<"0\n";
    }

}
