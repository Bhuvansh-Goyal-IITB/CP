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

    for (int i = 0; i < n; i++) {
      int val;
      cin >> val;

      cout << n - val + 1 << " ";
    }
    cout << "\n";
  }

  return 0;
}
