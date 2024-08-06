#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int l, r;
    cin >> l >> r;

    ll ans = 0;

    int first = l;
    int three_pow = 0;

    while (first > 0) {
      first /= 3;
      three_pow++;
    }

    ll divisor = pow(3, three_pow);
    ans += three_pow * 2;
    int front = l + 1;

    if (divisor > r) {
      ans += (r - front + 1) * three_pow;
    } else {
      while (divisor <= r) {
        ans += (divisor - front) * three_pow;
        front = divisor;
        three_pow++;
        divisor *= 3;
      }

      ans += (r - front + 1) * three_pow;
    }

    cout << ans << "\n";
  }
  return 0;
}
