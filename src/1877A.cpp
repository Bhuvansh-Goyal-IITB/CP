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
    --n;

    int ans = 0;
    while (n--) {
      int val;
      cin >> val;

      ans += val;
    }

    cout << -ans << "\n";
  }

  return 0;
}
