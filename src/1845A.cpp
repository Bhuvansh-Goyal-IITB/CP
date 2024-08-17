#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int n, k, x;
    cin >> n >> k >> x;

    if (x == 1) {
      if (k == 1) {
        cout << "NO\n";
      } else if (k == 2) {
        if (n & 1) {
          cout << "NO\n";
        } else {
          cout << "YES\n";

          cout << n / 2 << "\n";
          for (int i = 0; i < n / 2; i++) {
            cout << 2 << " ";
          }
          cout << "\n";
        }
      } else {
        cout << "YES\n";

        if (n == 4) {
          cout << 2 << "\n";
          cout << 2 << " " << 2 << "\n";
        } else {
          if (n & 1) {
            int sum = 3;
            cout << 1 + ((n - sum) / 2) << "\n";
            cout << 3 << " ";
            while (sum != n) {
              sum += 2;
              cout << 2 << " ";
            }
          } else {
            cout << n / 2 << "\n";
            for (int i = 0; i < n / 2; i++) {
              cout << 2 << " ";
            }
          }
          cout << "\n";
        }
      }
    } else {
      cout << "YES\n";
      cout << n << "\n";
      for (int i = 0; i < n; i++) {
        cout << 1 << " ";
      }
      cout << "\n";
    }
  }
}
