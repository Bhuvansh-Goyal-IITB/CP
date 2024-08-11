#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int a, b;
    cin >> a >> b;

    if ((a + b) % 3 != 0) {
      cout << "NO\n";
      continue;
    }

    if (a > 2 * b) {
      cout << "NO\n";
      continue;
    } else if (b > 2 * a) {
      cout << "NO\n";
      continue;
    }

    cout << "YES\n";
  }
}
