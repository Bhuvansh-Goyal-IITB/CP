#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    ll n, k;
    cin >> n >> k;

    if ((n & 1) == 0 || k == 1) {
      cout << "YES\n";
      continue;
    }

    ll remaining = n % k;

    if (remaining & 1) {
      if (k & 1) {
        cout << "YES\n";
      } else {
        cout << "NO\n";
      }
    } else {
      cout << "YES\n";
    }
  }

  return 0;
}
