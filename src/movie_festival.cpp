#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  vector<pair<int, int>> m;

  while (n--) {
    int a, b;
    cin >> a >> b;

    m.push_back({b, a});
  }

  sort(m.begin(), m.end());

  int ans = 1;

  auto prev = m.begin();
  for (auto it = m.begin() + 1; it != m.end(); it++) {
    if (it->second >= prev->first) {
      ans++;
      prev = it;
    }
  }

  cout << ans << "\n";
}
