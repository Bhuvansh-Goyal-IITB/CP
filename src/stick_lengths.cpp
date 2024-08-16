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

  sort(arr.begin(), arr.end());

  int median = arr.size() / 2;

  if ((arr.size() & 1) == 0) median--;

  ll ans = 0;

  for (int val : arr) {
    ans += abs(val - arr[median]);
  }

  cout << ans << "\n";
}
