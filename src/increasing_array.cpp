#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  int prev = -1;
  ll ans = 0;

  while (n--) {
    int val;
    cin >> val;

    if (prev < 0) {
      prev = val;
    } else if (val < prev) {
      ans += (ll)(prev - val);
    } else {
      prev = val;
    }
  }

  cout << ans << "\n";

  return 0;
}
