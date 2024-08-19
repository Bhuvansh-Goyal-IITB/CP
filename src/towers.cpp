#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  multiset<int> m;
  int ans = 0;

  for (int i = 0; i < n; i++) {
    int val;
    cin >> val;

    auto ub = m.upper_bound(val);

    if (ub == m.end()) {
      m.insert(val);
      ans++;
    } else {
      m.erase(ub);
      m.insert(val);
    }
  }

  cout << ans << "\n";
}
