#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int ans = 0;

    for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
        char ch;
        cin >> ch;

        if (ch != 'X') continue;

        for (int k = 1; k <= 5; k++) {
          if (((i == k - 1 || i == 9 - k + 1) &&
               (k - 1 <= j && j <= 9 - k + 1)) ||
              ((j == k - 1 || j == 9 - k + 1) &&
               (k - 1 <= i && i <= 9 - k + 1))) {
            ans += k;
            continue;
          };
        }
      }
    }

    cout << ans << "\n";
  }
}
