#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n;
    cin>>n;
    ll a[n+10][3];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(j==0)
            {
                a[i][j] += max(a[i-1][j+1],a[i-1][j+2]);
            }
            else if(j==1)
            {
                a[i][j] += max(a[i-1][j-1],a[i-1][j+1]);
            }
            else if(j==2)
            {
                a[i][j] += max(a[i-1][j-1],a[i-1][j-2]);
            }
        }
    }

    cout<<max({a[n-1][0],a[n-1][1],a[n-1][2]});
}
