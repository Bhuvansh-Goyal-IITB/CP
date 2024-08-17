#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  cin >> n >> m;

  vector<pair<int, int>> arr;
  for (int i = 0; i < n; i++) {
    int val;
    cin >> val;

    arr.push_back({val, i});
  }

  sort(arr.begin(), arr.end());

  int ans = 0;
  for (auto it = arr.begin() + 1; it != arr.end(); it++) {
    if (it->second < (it - 1)->second) ans++;
  }
  ans++;

  vector<int> iv;
  unordered_map<int, int> um;

  for (int i = 0; i < n; i++) {
    auto p = arr[i];
    iv.push_back(p.second);
    um[p.second] = i;
  }

  while (m--) {
    int l, r;
    cin >> l >> r;
    --l;
    --r;

    int big_index = max(um[l], um[r]);
    int small_index = min(um[l], um[r]);

    if (big_index - small_index > 1) {
      if (iv[small_index] < iv[small_index + 1] &&
          iv[big_index] > iv[small_index + 1])
        ans++;
      if (iv[small_index] > iv[small_index + 1] &&
          iv[big_index] < iv[small_index + 1])
        ans--;
    } else {
      if (iv[small_index] < iv[big_index]) ans++;
      if (iv[small_index] > iv[big_index]) ans--;
    }

    if (small_index != 0) {
      if (iv[small_index - 1] < iv[small_index] &&
          iv[small_index - 1] > iv[big_index])
        ans++;
      if (iv[small_index - 1] > iv[small_index] &&
          iv[small_index - 1] < iv[big_index])
        ans--;
    }

    if (big_index != n - 1) {
      if (iv[big_index] < iv[big_index + 1] &&
          iv[small_index] > iv[big_index + 1])
        ans++;
      if (iv[big_index] > iv[big_index + 1] &&
          iv[small_index] < iv[big_index + 1])
        ans--;
    }

    if (big_index - small_index > 1) {
      if (iv[big_index - 1] < iv[big_index] &&
          iv[big_index - 1] > iv[small_index])
        ans++;
      if (iv[big_index - 1] > iv[big_index] &&
          iv[big_index - 1] < iv[small_index])
        ans--;
    }

    int temp = um[l];
    um[l] = um[r];
    um[r] = temp;

    swap(iv[big_index], iv[small_index]);

    cout << ans << "\n";
  }
}
