#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  vector<int> arr;

  while (n--) {
    int val;
    cin >> val;

    arr.push_back(val);
  }

  ll sum = 0;
  ll ans = INT_MIN;

  for (int val : arr) {
    if (sum + val < 0) {
      sum = 0;
      if (val > ans) ans = val;
    } else {
      sum += val;
      ans = max(sum, ans);
    }
  }

  cout << ans << "\n";
}
