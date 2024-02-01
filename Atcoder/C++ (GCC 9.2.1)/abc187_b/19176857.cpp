#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll m,n,t=0,x=0,c=0;
    cin>>n;
    ll a[n+10],b[n+10];
    double d;

    for(int i = 0; i < n; i++)
    {
        cin>>a[i]>>b[i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(a[i]!=a[j])
            {
                x = a[i] - a[j];
                t = b[i] - b[j];
                d = t*1.0/x;

                if(d <= 1 && d >= -1)
                {
                        //cout<<" jhhj  "<<d<<endl;
                        c++;
                }
            }
        }
    }

    cout<<c;
}
