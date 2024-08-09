#include <bits/stdc++.h>
using namespace std;

#define ll long long

int solve(int n, string x, int m, string s) {
  for (int i = 0; i < n; i++) {
    int j = 0;
    bool match = true;

    int current_size = n;
    int operations = 0;

    while (j < m) {
      if (i + j >= current_size) {
        current_size *= 2;
        ++operations;
      }

      if (s[j] == x[(i + j) % n]) {
        ++j;
      } else {
        match = false;
        break;
      }
    }

    if (match) {
      return operations;
    }
  }

  return -1;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int n, m;
    cin >> n >> m;

    string x, s;
    cin >> x >> s;

    cout << solve(n, x, m, s) << "\n";
  }
}
