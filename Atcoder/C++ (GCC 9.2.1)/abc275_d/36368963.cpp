#include<bits/stdc++.h>
using namespace std;
map<long long,long long>p;

long long pass(long long n)
{
    if(p[n]!=0) return p[n];
    else return p[n]=pass(n/2L)+pass(n/3L);

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,m,t,l,r,k,c,x;

    cin>>n;
    p[0]=1;
    t=pass(n);
    cout<<t;


}

