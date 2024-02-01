#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll a,b,k,d,x;
    cin>>k;
    cin>>a>>b;
    x = a;
    d = a%k;

    if(d==0)
    {
        cout<<"OK\n";
    }
    else
    {
        d = a/k;
        d += 1;
        x = d*k;
        if(x >= a && x <= b)
        {
            cout<<"OK\n";
        }
        else
        {
            cout<<"NG\n";
        }

    }

}
