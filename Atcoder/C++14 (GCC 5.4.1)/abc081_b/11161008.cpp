#include<bits/stdc++.h>
using namespace std;
int pass(int t)
{
    int c = 0;
    while(1)
    {
        t /= 2;
        c++;
        if(t%2!=0)
        {
            return c;
            break;
        }

    }
}
int main()
{
    long int n,a[2000],t,max,c=0,g=0;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]%2!=0)
        {
            g = 1;
        }
    }

    max = 1000000000;

    if(g==1)
    {
        cout<<"0\n";
    }
    else
    {
        for(int i = 0; i < n; i++)
        {
            t = a[i];
           g =  pass(t);

            if(g < max)
            {
                max = g;
            }
        }

        cout<<max<<endl;
    }




}
