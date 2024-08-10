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
    string s;

    cin >> n;
    cin >> s;

    int ans = n;
    int end_index = n / 2;

    if ((n & 1) == 0) end_index--;

    for (int i = 0; i <= end_index; i++) {
      int left = s[i] == '0' ? 0 : 1;
      int right = s[n - i - 1] == '0' ? 0 : 1;

      if ((left ^ right) == 1) {
        ans -= 2;
      } else {
        break;
      }
    }

    cout << ans << "\n";
  }
}
