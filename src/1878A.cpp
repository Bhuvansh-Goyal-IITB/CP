#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    bool found = false;
    vector<int> arr;

    while (n--) {
      int val;
      cin >> val;

      arr.push_back(val);
    }

    for (int val : arr) {
      if (val == k) {
        found = true;
        break;
      }
    }

    if (found) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }

  return 0;
}
