#include <bits/stdc++.h>
using namespace std;

void search(vector<int>& subset, int k, int n) {
  if (k == n + 1) {
    for (int val : subset) {
      cout << val << " ";
    }
    cout << "\n";
  } else {
    subset.push_back(k);
    search(subset, k + 1, n);
    subset.pop_back();
    search(subset, k + 1, n);
  }
}

int main() {
  int n;
  cin >> n;

  vector<int> subset;
  search(subset, 1, n);
}
