#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int w, h;
    cin >> w >> h;

    int x1, x2, y1, y2;
    int bx1 = 0, bx2 = 0, by1 = 0, by2 = 0;

    cin >> x1;
    for (int i = 0; i < x1; i++) {
      int val;
      cin >> val;

      if (i == 0) bx1 = val;
      if (i == x1 - 1) bx1 = val - bx1;
    }

    cin >> x2;
    for (int i = 0; i < x2; i++) {
      int val;
      cin >> val;

      if (i == 0) bx2 = val;
      if (i == x2 - 1) bx2 = val - bx2;
    }

    cin >> y1;
    for (int i = 0; i < y1; i++) {
      int val;
      cin >> val;

      if (i == 0) by1 = val;
      if (i == y1 - 1) by1 = val - by1;
    }

    cin >> y2;
    for (int i = 0; i < y2; i++) {
      int val;
      cin >> val;

      if (i == 0) by2 = val;
      if (i == y2 - 1) by2 = val - by2;
    }

    ll ax = max(bx1, bx2);
    ax *= h;

    ll ay = max(by1, by2);
    ay *= w;

    cout << max(ax, ay) << "\n";
  }
}
