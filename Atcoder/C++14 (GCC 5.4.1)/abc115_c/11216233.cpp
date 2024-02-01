#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[200000],n,m,x,t,k;
    cin>>n>>k;

    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);
    m = a[n-1];

    for(int i = 0; i < n; i++)
    {
        if(i+k-1 >= n)
        {
            break;
        }
        else
        {

            if(a[i+k-1]-a[i] < m)
            {
                m = a[i+k-1]-a[i];
                //cout<<a[i+k-1]<<" "<<a[i]<<" "<<i+k-1<<endl;
            }

        }
    }

    cout<<m<<endl;


}
