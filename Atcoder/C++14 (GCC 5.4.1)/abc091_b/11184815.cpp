#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,k=0,f=0,g=0,sum=0,a[1000],max=0;
    memset(a,0,sizeof(a));
    map<string,int>f1;
    map<string,int>f2;
    map<string,int>f3;
    cin>>m;
    string s[m+10];
    getchar();
    for(int i = 0; i < m; i++)
    {
        cin>>s[i];
        f1[s[i]]++;
        //cout<<s[i]<<" "<<f1[s[i]]<<endl;
    }

    cin>>n;
    string s1[n+10];
    getchar();
    for(int i = 0; i < n; i++)
    {
        cin>>s1[i];
        f2[s1[i]]++;
    }

    for(int i = 0; i < m; i++)
    {
        if(f3[s[i]]!=-1)
        {
            f = (f1[s[i]]-f2[s[i]]);
            //cout<<f1[s[i]]<<" "<<f2[s[i]]<<endl;
            sum = f;
            if(max < sum)
            {
                max = sum;
            }
            //cout<<sum<<endl;
            f3[s[i]] = -1;
        }

    }


    cout<<max<<endl;



}

