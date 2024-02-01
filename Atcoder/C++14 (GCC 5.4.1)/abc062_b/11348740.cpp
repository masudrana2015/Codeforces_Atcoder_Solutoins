#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s[500];
    int k,l;
    cin>>k>>l;
    getchar();
    for(int i = 1; i <= k; i++)
    {
        cin>>s[i];

    }
    for(int i = 0; i <= k+1; i++)
    {
        if(i==0 || i==k+1)
        {
            for(int j = 0; j <= l+1;j++)
            {
                cout<<"#";
            }
        }
        else
        {
            cout<<"#"<<s[i]<<"#";
        }
        cout<<endl;
    }

}
