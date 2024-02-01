

#include <bits/stdc++.h>
using namespace std;


map<long long, long long> memo;

long long func(long long x){
  if (memo[x] != 0) return memo[x];
  else return memo[x] = func(x/2L) + func(x/3L);
}

int main(){

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // input
  long long n;
  cin >> n;

  // solve
  memo[0L] = 1L;
  long long ans = func(n);

  // output
  cout << ans << '\n';
  return 0;
  
}