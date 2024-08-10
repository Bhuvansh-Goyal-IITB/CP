#include <bits/stdc++.h>
using namespace std;

#define ll long long

void print_point(int x, int y) { cout << x << " " << y << "\n"; }

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int x_c, y_c, k;
    cin >> x_c >> y_c >> k;

    if (k == 1) {
      print_point(x_c, y_c);
      continue;
    }

    if (k & 1) {
      print_point(x_c - 1, y_c - 1);
      print_point(x_c - 2, y_c - 2);
      print_point(x_c + 3, y_c + 3);

      for (int i = 0; i < (k - 3) / 2; i++) {
        int x_r = x_c + 4 + i;
        int y_r = y_c + 4 + i;

        int x_l = x_c - 4 - i;
        int y_l = y_c - 4 - i;

        print_point(x_r, y_r);
        print_point(x_l, y_l);
      }
      continue;
    }

    for (int i = 0; i < k / 2; i++) {
      int x_r = x_c + i + 1;
      int y_r = y_c + i + 1;

      int x_l = x_c - i - 1;
      int y_l = y_c - i - 1;

      print_point(x_r, y_r);
      print_point(x_l, y_l);
    }
  }

  return 0;
}
