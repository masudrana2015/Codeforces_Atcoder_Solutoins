#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,g,x,t,h,k=0,f,l=0;
    cin>>n;
    if(n < 10)
    {
        cout<<n<<endl;
    }
    else if(n < 100)
    {
        cout<<"9"<<endl;
    }
    else if(n < 1000)
    {
        cout<<n-90<<endl;
    }
    else if(n < 10000)
    {
        cout<<"909"<<endl;
    }
    else if(n >= 10000 && n < 100000)
    {
        cout<<n-9090<<endl;
    }
    else if(n == 100000)
    {
        cout<<n-9091<<endl;
    }

}
