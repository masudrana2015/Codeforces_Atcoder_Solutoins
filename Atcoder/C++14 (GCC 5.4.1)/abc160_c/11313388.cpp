#include<bits/stdc++.h>
using namespace std;
int a[300000];
int main()
{
    long long int m,n,d,re,s=0,k,max=0;
    cin>>k>>n;
    for(int i  = 0; i < n; i++)
    {
        cin>>a[i];
        if(i!=0)
        {
            s += a[i]-a[i-1];
            d = a[i]-a[i-1];
            if(d > max)
            {
                max = d;
            }
        }

    }
    //m = a[n-1] - a[n-2];
    re = a[0]+(k-a[n-1]);

    if(max > re)
    {
        s -= max;
        s += re;
        cout<<s<<endl;
    }
    else
    {
        cout<<s<<endl;
    }


}



