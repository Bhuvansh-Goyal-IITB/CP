#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(vector<pair<int, int>> &solution, int n, int f, int t) {
  if (n == 1) {
    solution.push_back(make_pair(f, t));
  } else {
    solve(solution, n - 1, f, f ^ t);
    solution.push_back(make_pair(f, t));
    solve(solution, n - 1, f ^ t, t);
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  vector<pair<int, int>> solution;
  solve(solution, n, 1, 3);

  cout << solution.size() << "\n";

  for (auto p : solution) {
    cout << p.first << " " << p.second << "\n";
  }
}
