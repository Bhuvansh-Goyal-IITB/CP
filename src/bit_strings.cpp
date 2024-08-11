#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD_VALUE 1000000007

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll n;
  cin >> n;

  ll ans = 1;
  for (ll i = 0; i < n; i++) {
    ans = (ans << 1) % MOD_VALUE;
  }

  cout << ans << "\n";
}
