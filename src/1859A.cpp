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

    bool all_same = true;
    for (auto it = arr.begin() + 1; it != arr.end(); it++) {
      if (*it != *(it - 1)) {
        all_same = false;
        break;
      }
    }

    if (all_same) {
      cout << -1 << "\n";
      continue;
    }

    int min = *min_element(arr.begin(), arr.end());
    int min_count = 0;

    for (int val : arr) {
      if (val == min) min_count++;
    }

    cout << min_count << " " << n - min_count << "\n";

    for (int i = 0; i < min_count; i++) cout << min << " ";
    cout << "\n";

    for (int val : arr) {
      if (val != min) cout << val << " ";
    }
    cout << "\n";
  }

  return 0;
}
