#include <bits/stdc++.h>
using namespace std;

#define ll long long

void generate_dp_array(vector<int> &arr, vector<ll> &dp, int depth) {
  int size = arr.size();

  if (depth == size - 1) {
    dp[depth] = arr[depth];
    return;
  }

  generate_dp_array(arr, dp, depth + 1);

  if (dp[depth + 1] > 0) {
    dp[depth] = arr[depth] + dp[depth + 1];
  } else {
    dp[depth] = arr[depth];
  }
}

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

  vector<ll> dp(arr.size());

  generate_dp_array(arr, dp, 0);

  cout << *max_element(dp.begin(), dp.end()) << "\n";
}
