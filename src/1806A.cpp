#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int ans = 0;

    int del_y = d - b;
    if (del_y < 0) {
      cout << -1 << "\n";
      continue;
    }

    ans += del_y;
    a += del_y;

    int del_x = c - a;

    if (del_x > 0) {
      cout << -1 << "\n";
      continue;
    }

    ans += -1 * del_x;

    cout << ans << "\n";
  }
}
