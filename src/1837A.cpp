#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int x, k;
    cin >> x >> k;

    int remaining = x;
    vector<int> sol;

    while (remaining) {
      for (int i = remaining; i >= 1; i--) {
        if (i % k != 0) {
          sol.push_back(i);
          remaining -= i;
          break;
        }
      }
    }

    cout << sol.size() << "\n";
    for (int val : sol) {
      cout << val << " ";
    }
    cout << "\n";
  }

  return 0;
}
