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

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    int min_diff = INT_MAX;

    for (auto it = arr.begin() + 1; it != arr.end(); it++) {
      min_diff = min(min_diff, *it - *(it - 1));
    }

    if (min_diff < 0) {
      cout << 0 << "\n";
      continue;
    }

    cout << (min_diff / 2) + 1 << "\n";
  }

  return 0;
}
