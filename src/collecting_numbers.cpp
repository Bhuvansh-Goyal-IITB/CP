#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  vector<pair<int, int>> arr;
  int index = 0;
  while (n--) {
    int val;
    cin >> val;

    arr.push_back({val, index++});
  }

  sort(arr.begin(), arr.end());

  int ans = 0;
  for (auto it = arr.begin() + 1; it != arr.end(); it++) {
    if (it->second < (it - 1)->second) ans++;
  }

  cout << ++ans << "\n";
}
