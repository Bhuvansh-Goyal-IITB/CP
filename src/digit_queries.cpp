#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int q;
  cin >> q;

  while (q--) {
    ll k;
    cin >> k;

    ll num_digits = 9;
    int n = 1;

    ll end = n * num_digits;

    while (k > end) {
      ++n;
      num_digits *= 10;
      end += n * num_digits;
    }

    ll index = k - (end - n * num_digits) - 1;
    num_digits /= 9;

    ll num = (index / n) + num_digits;

    int digit = 0;
    for (int i = 0; i < n - (index % n); i++) {
      digit = num % 10;
      num /= 10;
    }

    cout << digit << "\n";
  }
  return 0;
}
