#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    ll n,s=0,m,x,l=0,r,c,k;
    cin>>n;

    queue<int>q,t;

    for(int i=0;i<n;i++)
    {
        cin>>m;

        if(m==1)
        {
            cin>>x>>c;
            q.push(x);
            t.push(c);
        }
        else
        {
            s=0;
            cin>>x;

            while(x!=0)
            {
                if(x>=t.front())
                {
                    x-=t.front();
                    l=t.front();
                    r=q.front();
                    s+=l*r;
                    t.pop(),q.pop();
                }
                else
                {
                    s+=x*(q.front());
                    //cout<<t.front()<<" jhgjh "<<x<<endl;
                    t.front()-=x;
                    x=0;
                }
            }

            cout<<s<<endl;
        }
    }
}
