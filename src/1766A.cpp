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

    int tier = 10;
    int ans = 0;

    while (n >= tier) {
      ans += 9;
      tier *= 10;
    }

    tier /= 10;

    for (int i = 1; i <= 10; i++) {
      if (n < tier * i) {
        ans += i - 1;
        break;
      }
    }

    cout << ans << "\n";
  }
}
