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

    if (n < 102) {
      cout << "NO\n";
      continue;
    }

    if (n < 1000) {
      if (n / 10 != 10) {
        cout << "NO\n";
        continue;
      }

      cout << "YES\n";
      continue;
    }

    if (n < 10000) {
      if (n / 100 != 10) {
        cout << "NO\n";
        continue;
      }

      if ((n / 10) % 10 == 0) {
        cout << "NO\n";
        continue;
      }

      cout << "YES\n";
      continue;
    }

    cout << "NO\n";
  }

  return 0;
}
