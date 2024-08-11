#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  int pow = 0;
  for (int i = 5; i <= n; i *= 5) {
    pow += n / i;
  }

  cout << pow << "\n";
}
