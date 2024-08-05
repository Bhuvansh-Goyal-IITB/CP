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

    vector<int> two_indices;
    int current_index = 0;

    while (n--) {
      int val;
      cin >> val;

      current_index++;
      if (val == 2) {
        two_indices.push_back(current_index);
      }
    }

    int two_count = two_indices.size();

    if (two_count == 0) {
      cout << 1 << "\n";
    } else if (two_count & 1) {
      cout << -1 << "\n";
    } else {
      cout << two_indices[(two_count / 2) - 1] << "\n";
    }
  }

  return 0;
}
