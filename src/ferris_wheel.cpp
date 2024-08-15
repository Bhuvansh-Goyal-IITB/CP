#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, x;
  cin >> n >> x;

  vector<ll> weights;
  while (n--) {
    ll val;
    cin >> val;
    weights.push_back(val);
  }

  sort(weights.begin(), weights.end());

  int i = 0;
  int j = weights.size() - 1;

  int ans = 0;

  while (i < j) {
    if (weights[i] + weights[j] > x) {
      ans++;
    } else {
      ans++;
      i++;
    }
    j--;
  }

  if (i == j) ans++;

  cout << ans << "\n";
}
