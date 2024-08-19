#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  int ans = INT_MAX;
  while (n--) {
    int val;
    cin >> val;

    ans = min(ans, abs(val));
  }

  cout << ans << "\n";
}
