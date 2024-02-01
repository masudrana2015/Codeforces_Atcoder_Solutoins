#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+10];
    set<int>x;
    for(int i = 0;i < n;i++)
    {
        cin>>a[i];
        x.insert(a[i]);
    }

    cout<<x.size()<<endl;
}
