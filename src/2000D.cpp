#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(vector<int> &arr, stack<pair<int, int>> &stk, string &s) {
  int n = arr.size();

  int i = 0;
  int j = n - 1;

  while (i < j) {
    while (i < n && s[i] != 'L') i++;
    while (j >= 0 && s[j] != 'R') j--;

    if (i < n && j >= 0 && i < j) {
      stk.push(make_pair(i, j));
    }
    i++;
    j--;
  }
}

void prefix_sum(vector<int> &arr, vector<ll> &ps) {
  ll sum = 0;
  int n = arr.size();

  for (int i = n - 1; i >= 0; i--) {
    sum += arr[i];
    ps[i] = sum;
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> arr;
    while (n--) {
      int val;
      cin >> val;

      arr.push_back(val);
    }

    vector<ll> ps(arr.size());
    stack<pair<int, int>> stk;

    prefix_sum(arr, ps);

    string s;
    cin >> s;

    solve(arr, stk, s);

    ll ans = 0;
    int size = arr.size();
    while (!stk.empty()) {
      pair<int, int> top = stk.top();

      if (top.second == size - 1) {
        ans += ps[top.first];
      } else {
        ans += ps[top.first] - ps[top.second + 1];
      }

      stk.pop();
    }

    cout << ans << "\n";
  }

  return 0;
}
