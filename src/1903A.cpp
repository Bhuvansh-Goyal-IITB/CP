#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  int iteration = 1;
  while (t--) {
    int n, k;
    cin >> n >> k;

    if (k > 1) {
      cout << "YES\n";

      while (n--) {
        int val;
        cin >> val;
      }

      iteration++;
      continue;
    }

    int prev = 0;
    bool is_non_decreasing = true;
    while (n--) {
      int val;
      cin >> val;

      if (prev > val) {
        is_non_decreasing = false;
      }
      prev = val;
    }

    if (is_non_decreasing) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
    iteration++;
  }

  return 0;
}
