#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int sum = 0;
    int neg_count = 0;
    while (n--) {
      int val;
      cin >> val;

      sum += val;
      if (val < 0) neg_count++;
    }

    int ans = 0;
    if (sum >= 0) {
      if (neg_count & 1) ans++;
    } else {
      if ((-sum) & 1) {
        ans += ((-sum) / 2) + 1;
      } else {
        ans += (-sum) / 2;
      }

      neg_count -= ans;

      if (neg_count & 1) ans++;
    }

    cout << ans << "\n";
  }

  return 0;
}
