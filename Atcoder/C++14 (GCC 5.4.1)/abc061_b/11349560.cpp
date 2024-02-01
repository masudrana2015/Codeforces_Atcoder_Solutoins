#include<bits/stdc++.h>
using namespace std;
int main()
{

    int k,l,a,b;
    cin>>k;
    cin>>l;

    map<int,int>s;
    for(int i = 0; i < l; i++)
    {
        cin>>a>>b;
        s[a]++;
        s[b]++;


    }
    for(int i = 1; i <= k; i++)
    {
        cout<<s[i]<<endl;
    }
}



