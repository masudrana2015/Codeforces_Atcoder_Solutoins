#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,c,n,m,s=0;
    cin>>n>>m;
    int a[n+10];
    for(int i = 0;i < n;i++)
    {
        cin>>a[i];
        s += a[i];
    }
    sort(a,a+n);
    reverse(a,a+n);

    b  = ceil(s*1.0/(4*m));

    //cout<<a[m-1]<<" "<<b<<endl;

    if(a[m-1] >= b)
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
    }
}


