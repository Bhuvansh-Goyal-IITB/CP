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

    int axor = 0;
    for (int i = 0; i < n; i++) {
      int val;
      cin >> val;

      axor ^= val;
    }

    if ((n & 1) == 0 && axor != 0) {
      cout << -1 << "\n";
      continue;
    }

    cout << axor << "\n";
  }

  return 0;
}
