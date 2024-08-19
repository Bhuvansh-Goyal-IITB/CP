#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  vector<int> arr(n);

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int count = 1;

  int ans = 1;
  int start = 0;

  map<int, int> m;
  m[arr[0]] = 0;

  for (auto it = arr.begin() + 1; it != arr.end(); it++) {
    int index = it - arr.begin();

    if (m.find(*it) != m.end()) {
      if (m[*it] < start) {
        m[*it] = index;
        count++;
      } else {
        start = m[*it] + 1;
        count = index - start + 1;
        m[*it] = index;
      }
    } else {
      m[*it] = index;
      count++;
    }

    ans = max(ans, count);
  }

  cout << ans << "\n";
}
