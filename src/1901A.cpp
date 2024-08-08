#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int n, x;
    cin >> n >> x;

    int ans = 0;
    int prev = 0;

    while (n--) {
      int val;
      cin >> val;

      int distance = val - prev;
      if (distance > ans) {
        ans = distance;
      }

      if (n == 0) {
        ans = max(ans, (x - val) * 2);
      }

      prev = val;
    }

    cout << ans << "\n";
  }

  return 0;
}
