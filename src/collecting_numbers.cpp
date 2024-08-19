#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  vector<int> arr(n);
  for (int i = 0; i < n; i++) cin >> arr[i];

  vector<bool> visited(n, false);
  int ans = 1;

  for (int i = 0; i < n; i++) {
    visited[arr[i] - 1] = true;
    if (arr[i] == n) continue;
    if (visited[arr[i]]) ans++;
  }

  cout << ans << "\n";
}
