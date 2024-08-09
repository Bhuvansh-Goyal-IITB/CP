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

    int num_odd = 0;
    while (n--) {
      int val;
      cin >> val;

      if (val & 1) num_odd++;
    }

    if (num_odd & 1) {
      cout << "NO\n";
    } else {
      cout << "YES\n";
    }
  }
  return 0;
}
