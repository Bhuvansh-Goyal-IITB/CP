#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  vector<pair<int, int>> arr;

  while (n--) {
    int a, l;
    cin >> a >> l;

    arr.push_back({a, 1});
    arr.push_back({l, -1});
  }

  sort(arr.begin(), arr.end());

  int curr_persons = 0;
  int max_persons = 0;

  for (auto p : arr) {
    curr_persons += p.second;
    max_persons = max(max_persons, curr_persons);
  }

  cout << max_persons << "\n";
}
