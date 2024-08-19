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

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    int possible = false;
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        if (gcd(arr[i], arr[j]) <= 2) {
          possible = true;
          break;
        }
      }
      if (possible) break;
    }

    if (possible) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }

  return 0;
}
