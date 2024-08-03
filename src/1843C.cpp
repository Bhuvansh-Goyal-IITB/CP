#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  while (n--) {
    ll search_node;
    cin >> search_node;

    ll ans = search_node;
    while (search_node != 1) {
      search_node /= 2;
      ans += search_node;
    }
    cout << ans << "\n";
  }
}
