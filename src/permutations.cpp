#include <bits/stdc++.h>
using namespace std;

#define ll long long

void beautiful_exists(int n) {
  if (n == 1) {
    cout << 1 << "\n";
    return;
  }
  if (n == 2 || n == 3) {
    cout << "NO SOLUTION\n";
    return;
  }

  for (int i = 2; i <= n; i += 2) {
    cout << i << " ";
  }
  for (int i = 1; i <= n; i += 2) {
    cout << i << " ";
  }
  cout << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  beautiful_exists(n);
  return 0;
}
