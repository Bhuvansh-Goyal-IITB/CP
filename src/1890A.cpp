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

    unordered_map<int, int> fm;

    for (int i = 0; i < n; i++) {
      int val;
      cin >> val;

      fm[val]++;
    }

    if (fm.size() > 2) {
      cout << "No\n";
      continue;
    }

    if (fm.size() == 1) {
      cout << "Yes\n";
      continue;
    }

    int count_1 = fm.begin()->second;
    int count_2 = (++fm.begin())->second;

    if (abs(count_2 - count_1) > 1) {
      cout << "No\n";
    } else {
      cout << "Yes\n";
    }
  }
}
