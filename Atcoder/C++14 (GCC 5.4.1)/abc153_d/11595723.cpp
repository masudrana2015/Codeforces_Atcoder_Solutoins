#include<bits/stdc++.h>
using namespace std;
unsigned long long int pass(long long int n)
{
    unsigned long long int t = 0,s=1;
    while(1)
    {
        if(n==1)
        {
            return s;
            break;
        }
        else
        {
             n= (n/2);
             t++;
             //cout<<" n "<<n<<endl;
             s += pow(2,t);
             if(t==1)
             {
                 s -= 1;
                 //cout<<s<<endl;
             }
             //cout<<s<<endl;

        }
    }
}
int main()
{
    unsigned long long int m,n,t=0,c=0,s=0;
    cin>>n;
    if(n == 1)
    {
        cout<<"1\n";
    }
    else
    {
        m = pass(n);

        {
            cout<<m+1<<endl;
        }
    }
}

