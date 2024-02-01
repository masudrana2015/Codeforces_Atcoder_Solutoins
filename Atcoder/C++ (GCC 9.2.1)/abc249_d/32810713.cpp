#include<bits/stdc++.h>
using namespace std;
const int N =3e5+5;
int a[N],n,T;
long long cnt[N];
long long ans;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		cnt[a[i]]++;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=sqrt(a[i]);j++)
		{
			if(j * j == a[i])
				ans += cnt[j] * (cnt[j]);
			else if(a[i] % j == 0)
				ans += cnt[j] * cnt[a[i] / j] * 2;
		}
	}
	cout<<ans<<endl;
	return 0;
 }
