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

    int digit_0 = n % 10;
    int digit_1 = n / 10;

    cout << digit_0 + digit_1 << "\n";
  }
}
