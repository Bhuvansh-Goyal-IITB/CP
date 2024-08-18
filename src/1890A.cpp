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

    set<int> s;
    unordered_map<int, int> fm;

    for (int i = 0; i < n; i++) {
      int val;
      cin >> val;

      s.insert(val);
      fm[val]++;
    }

    if (s.size() > 2) {
      cout << "No\n";
      continue;
    }

    if (s.size() == 1) {
      cout << "Yes\n";
      continue;
    }

    int count_1 = fm[*s.begin()];
    int count_2 = fm[*(++s.begin())];

    if (abs(count_2 - count_1) > 1) {
      cout << "No\n";
    } else {
      cout << "Yes\n";
    }
  }
}
