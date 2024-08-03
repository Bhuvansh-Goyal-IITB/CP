#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  vector<int> p;
  n--;
  while (n--) {
    int p_i;
    cin >> p_i;

    p.push_back(p_i);
  }

  stack<int> output;

  int i = p.size() - 1;
  output.push(i + 2);
  output.push(p[i]);

  while (i >= 0 && p[i] != 1) {
    i = p[i] - 2;
    output.push(p[i]);
  }

  while (!output.empty()) {
    cout << output.top() << " ";
    output.pop();
  }
  cout << "\n";
  return 0;
}
