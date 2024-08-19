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

    if (arr[0] == arr[n - 1]) {
      cout << "NO\n";
      continue;
    }

    cout << "YES\n";
    cout << arr[0] << " ";
    for (int i = n - 1; i >= 1; i--) {
      cout << arr[i] << " ";
    }
    cout << "\n";
  }

  return 0;
}
