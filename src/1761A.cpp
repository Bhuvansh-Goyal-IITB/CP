#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int n, a, b;
    cin >> n >> a >> b;

    if (n == a && a == b) {
      cout << "Yes\n";
    } else {
      if (n - a - b > 1) {
        cout << "Yes\n";
      } else {
        cout << "No\n";
      }
    }
  }

  return 0;
}
