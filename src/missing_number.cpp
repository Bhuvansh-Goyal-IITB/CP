#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  int ans = 1;
  for (int i = 2; i <= n; i++) {
    ans ^= i;
  }

  while (cin >> n) {
    ans ^= n;
  }

  cout << ans << "\n";
}
