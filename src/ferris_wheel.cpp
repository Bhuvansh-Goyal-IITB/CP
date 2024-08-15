#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, x;
  cin >> n >> x;

  multiset<ll> weights;
  int ans = 0;

  while (n--) {
    ll val;
    cin >> val;
    weights.insert(val);
  }

  ll remaining_space = 0;

  while (!weights.empty()) {
    if (remaining_space == 0) {
      ans++;
      auto it = --weights.end();
      remaining_space = x - *it;
      weights.erase(it);
    } else {
      auto ub = weights.upper_bound(remaining_space);

      if (ub == weights.begin() && *ub > remaining_space) {
        remaining_space = 0;
        continue;
      }

      if (ub == weights.end() || *ub > remaining_space) {
        ub--;
      }

      weights.erase(ub);
      remaining_space = 0;
    }
  }

  cout << ans << "\n";
}
