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

  ll x = 0;
  bool found = false;
  for (int val : arr) {
    if (val > x + 1) {
      cout << x + 1 << "\n";
      found = true;
      break;
    }

    x += val;
  }

  if (!found) cout << x + 1 << "\n";

  return 0;
}
