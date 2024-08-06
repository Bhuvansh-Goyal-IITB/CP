#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool solve(int *larr, int *rarr, int n, int s, int m) {
  for (int i = 0; i < n; i++) {
    if (i == 0 && larr[0] >= s) {
      return true;
    }
    if (i == n - 1 && m - rarr[n - 1] >= s) {
      return true;
    }

    if (i > 0 && larr[i] - rarr[i - 1] >= s) {
      return true;
    }
  }

  return false;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int n, s, m;
    cin >> n >> s >> m;

    vector<pair<int, int>> arr;
    int *larr = new int[n];
    int *rarr = new int[n];
    int index = 0;

    while (n--) {
      int l, r;
      cin >> l >> r;
      larr[index] = l;
      rarr[index] = r;
      index++;
    }

    if (solve(larr, rarr, index, s, m)) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }

    delete[] larr;
    delete[] rarr;
  }
}
