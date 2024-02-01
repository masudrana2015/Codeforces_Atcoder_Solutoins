#include<bits/stdc++.h>
using namespace std;
int main()
{

    int k,l,c=0,x,s=0,t,m,n;
    cin>>m>>n>>k;
    int a[k+10];
    //memset(a,0,sizeof(a));
    map<int,int>s1;

    for(int i = 0; i < k; i++)
    {
        cin>>x;
        s1[x-1]++;
    }
    for(int i = 0; i < m; i++)
    {
        t = s1[i]+n-k;

        if(t <= 0)
        {
            cout<<"No\n";
        }
        else{
            cout<<"Yes\n";
        }
    }

}



