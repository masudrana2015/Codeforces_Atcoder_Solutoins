#include<bits/stdc++.h>
using namespace std;
int main()
{

     int k,l,b,c=0,x,ans=0;
    cin>>k;
     int a[k+10];
    for(int i = 0; i < k; i++)
    {
        cin>>a[i];
    }
    for(int i = 1; i < k; i++)
    {

        if (a[i] > a[i-1]) c = i;
		ans = max(ans, i-c);
    }


    cout<<ans<<endl;
}



