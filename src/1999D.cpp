#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    string s, t;
    cin >> s >> t;

    int i = 0, j = 0;

    int len_s = s.length();
    int len_t = t.length();

    while (i < len_s && j < len_t) {
      if (s[i] == '?' || s[i] == t[j]) {
        s[i] = t[j];
        ++i;
        ++j;
        continue;
      }
      ++i;
    }

    if (j != len_t) {
      cout << "NO\n";
      continue;
    } else {
      for (int k = 0; k < len_s; k++) {
        if (s[k] == '?') s[k] = 'a';
      }

      cout << "YES\n";
      cout << s << "\n";
    }
  }
}
