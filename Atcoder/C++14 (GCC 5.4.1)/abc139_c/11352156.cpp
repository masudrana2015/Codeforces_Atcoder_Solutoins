#include<bits/stdc++.h>
using namespace std;
int a[300000];
int main()
{

    int k,l,b;
    cin>>k;

    map<int,int>s;
    for(int i = 0; i < k; i++)
    {
        cin>>a[i];
        s[a[i]] = i;
        //s[b]++;


    }
    for(int i = 1; i <= k; i++)
    {
        cout<<s[i]+1<<" ";
    }
}



