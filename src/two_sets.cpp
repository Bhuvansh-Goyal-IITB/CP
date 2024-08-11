#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(int n) {
  ll total_sum;

  if (n & 1) {
    total_sum = (n + 1) / 2;
    total_sum *= n;
  } else {
    total_sum = n / 2;
    total_sum *= n + 1;
  }

  if (total_sum & 1) {
    cout << "NO\n";
    return;
  }

  cout << "YES\n";

  ll sum = 0;
  ll remaining = 0;
  ll break_index = 0;

  for (ll i = n; i >= 1; i--) {
    if (sum < (total_sum / 2)) {
      sum += i;
    } else {
      if (sum == total_sum / 2) {
        remaining = 0;
        break_index = i + 1;
      } else {
        remaining = (total_sum / 2) - sum + i + 1;
        break_index = i + 2;
      }
      break;
    }
  }

  if (remaining > 0) {
    cout << n - break_index + 2 << "\n";
    cout << remaining << " ";
  } else {
    cout << n - break_index + 1 << "\n";
  }

  for (ll i = break_index; i <= n; i++) {
    cout << i << " ";
  }
  cout << "\n";

  if (remaining > 0) {
    cout << break_index - 2 << "\n";

  } else {
    cout << break_index - 1 << "\n";
  }

  for (ll i = 1; i < break_index; i++) {
    if (i != remaining) {
      cout << i << " ";
    }
  }
  cout << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  solve(n);

  return 0;
}
