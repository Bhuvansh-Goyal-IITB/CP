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

    int count = 0;
    int ans = 0;

    for (int val : arr) {
      if (val == 0)
        count++;
      else
        count = 0;

      ans = max(ans, count);
    }

    cout << ans << "\n";
  }

  return 0;
}
