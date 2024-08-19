#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int a, k, c;
    cin >> a >> k >> c;

    int ao = c / 2;
    if (c & 1) ao++;
    int ke = c - ao;

    if (a + ao > k + ke) {
      cout << "First\n";
    } else {
      cout << "Second\n";
    }
  }

  return 0;
}
