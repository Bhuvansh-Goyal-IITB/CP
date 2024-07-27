#include <bits/stdc++.h>
using namespace std;

#define long long ll

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  char ch = 0, current = ch;
  int count = 0, ans = 0;

  while (cin >> ch) {
    if (current == 0) {
      current = ch;
      count++;
    } else {
      if (ch == current) {
        count++;
      } else {
        ans = max(ans, count);
        count = 1;
      }
      current = ch;
    }
  }

  ans = max(ans, count);
  cout << ans << "\n";
  return 0;
}
