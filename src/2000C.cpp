#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool solve(vector<int> &temp, string s) {
  int n = temp.size();
  if (temp.size() != s.size()) return false;

  unordered_map<int, char> umic;
  unordered_map<char, int> umci;

  for (int i = 0; i < n; i++) {
    if (umic.count(temp[i]) > 0 && umic[temp[i]] != s[i]) return false;
    if (umci.count(s[i]) > 0 && umci[s[i]] != temp[i]) return false;

    umic[temp[i]] = s[i];
    umci[s[i]] = temp[i];
  }

  return true;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> temp;

    while (n--) {
      int val;
      cin >> val;
      temp.push_back(val);
    }

    int m;
    cin >> m;
    while (m--) {
      string s;
      cin >> s;

      if (solve(temp, s)) {
        cout << "YES\n";
      } else {
        cout << "NO\n";
      }
    }
  }

  return 0;
}
