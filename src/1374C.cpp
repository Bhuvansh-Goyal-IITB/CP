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

    stack<char> s;

    for (int i = 0; i < n; i++) {
      char ch;
      cin >> ch;

      if (s.empty()) {
        s.push(ch);
        continue;
      }

      if (s.top() == '(' && ch == ')') {
        s.pop();
      } else {
        s.push(ch);
      }
    }

    cout << s.size() / 2 << "\n";
  }

  return 0;
}
