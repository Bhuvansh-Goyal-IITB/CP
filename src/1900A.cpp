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
    string s;
    cin >> n;
    cin >> s;

    int len = 0;
    int ans = 0;

    bool triplet_found = false;

    for (int i = 0; i < n; i++) {
      char ch = s[i];
      if (ch == '#') {
        ans += len;

        len = 0;
        continue;
      }

      len++;

      if (len == 3) {
        triplet_found = true;
        ans = 2;
        break;
      }
    }

    if (!triplet_found && s[n - 1] != '#') ans += len;

    cout << ans << "\n";
  }
}
