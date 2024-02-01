#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int m,n,k,g=0;
    cin>>m>>n>>k;
    //memset(a,0,sizeof(a));
    map<int,int>a;
    for(int i = 0; i < k; i++)
    {
        if(m+i > n)
        {
            g = 1;
            break;
        }
        else
        {
            cout<<m+i<<endl;
            a[m+i] = -1;
        }
    }

    for(int i = k-1; i >= 0; i--)
    {
        if(g==1)
        {
            break;
        }
        else
        {
            if(-1 != a[n-i])
            {
                cout<<n-i<<endl;

            }

        }
    }

}
