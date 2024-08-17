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

    n--;
    ll prev;
    cin >> prev;

    int ans = 0;

    while (n--) {
      ll val;
      cin >> val;
      if (((prev & 1) ^ (val & 1)) == 0) {
        ans++;
        prev = prev * val;
      } else {
        prev = val;
      }
    }

    cout << ans << "\n";
  }
}
