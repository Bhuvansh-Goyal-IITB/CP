#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

int get_occupied_count(int row, int col, int n) {
  int count = 0;
  if (row + 1 < n) {
    if (col + 2 < n) count++;
    if (col - 2 >= 0) count++;
  }

  if (row + 2 < n) {
    if (col + 1 < n) count++;
    if (col - 1 >= 0) count++;
  }

  if (row - 1 >= 0) {
    if (col + 2 < n) count++;
    if (col - 2 >= 0) count++;
  }

  if (row - 2 >= 0) {
    if (col + 1 < n) count++;
    if (col - 1 >= 0) count++;
  }

  return count + 1;
}

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int input;
  cin >> input;

  for (int n = 1; n <= input; n++) {
    int ans = 0;
    int n_sq = n * n;

    if (n < 5) {
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
          ans += n_sq - get_occupied_count(i, j, n);
        }
      }

      ans /= 2;

      cout << ans << "\n";

      continue;
    }

    for (int j = 0; j < n; j++) {
      ans += n_sq - get_occupied_count(0, j, n);
    }
    for (int j = 0; j < n; j++) {
      ans += n_sq - get_occupied_count(1, j, n);
    }
    for (int j = 0; j < n; j++) {
      ans += n_sq - get_occupied_count(n - 2, j, n);
    }
    for (int j = 0; j < n; j++) {
      ans += n_sq - get_occupied_count(n - 1, j, n);
    }

    ans += 2 * (n - 4) * (n_sq - 7);
    ans += 2 * (n - 4) * (n_sq - 5);

    int inner_sq = (n - 4) * (n - 4);
    ans += inner_sq * (n_sq - 9);

    ans /= 2;

    cout << ans << "\n";
  }
  return 0;
}
