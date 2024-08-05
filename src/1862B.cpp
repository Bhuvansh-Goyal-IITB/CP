#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> values;
    int prev = 0;

    while (n--) {
      int val;
      cin >> val;

      if (val < prev) {
        values.push_back(val);
      }

      values.push_back(val);

      prev = val;
    }

    cout << values.size() << "\n";
    for (int val : values) {
      cout << val << " ";
    }
    cout << "\n";
  }
}
