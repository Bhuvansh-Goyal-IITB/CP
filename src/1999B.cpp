#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;

    int ans = 0;
    if (a1 > b1 && a2 > b2) {
      ans += 2;
    }

    if (a1 > b2 && a2 > b1) {
      ans += 2;
    }

    if (a1 > b1 && a2 == b2) {
      ans += 2;
    }

    if (a1 > b2 && a2 == b1) {
      ans += 2;
    }

    if (a2 > b1 && a1 == b2) {
      ans += 2;
    }

    if (a2 > b2 && a1 == b1) {
      ans += 2;
    }

    cout << ans << "\n";
  }

  return 0;
}
