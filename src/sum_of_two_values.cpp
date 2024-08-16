#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, x;
  cin >> n >> x;

  vector<pair<int, int>> arr;

  int index = 0;
  while (n--) {
    int val;
    cin >> val;

    arr.push_back({val, index++});
  }

  sort(arr.begin(), arr.end());

  int i = 0, j = arr.size() - 1;

  bool found = false;
  while (i < j) {
    if (arr[i].first < x - arr[j].first) {
      i++;
      continue;
    }

    if (arr[i].first == x - arr[j].first) {
      found = true;
      cout << arr[i].second + 1 << " " << arr[j].second + 1 << "\n";
      break;
    }

    if (arr[i].first > x - arr[j].first) {
      j--;
    }
  }

  if (!found) cout << "IMPOSSIBLE\n";

  return 0;
}
