#include <bits/stdc++.h>
using namespace std;

void search(vector<int> &permutation, vector<bool> chosen, size_t n) {
  if (permutation.size() == n) {
    for (int val : permutation) {
      cout << val << " ";
    }
    cout << "\n";
  } else {
    for (size_t i = 1; i <= n; i++) {
      if (chosen[i]) continue;
      chosen[i] = true;
      permutation.push_back(i);
      search(permutation, chosen, n);
      chosen[i] = false;
      permutation.pop_back();
    }
  }
}

void std_lib_next_permutation(vector<int> &permutation, int n) {
  for (int i = 0; i < n; i++) {
    permutation.push_back(i + 1);
  }

  do {
    for (int val : permutation) {
      cout << val << " ";
    }
    cout << "\n";
  } while (next_permutation(permutation.begin(), permutation.end()));
}

int main() {
  int n;
  cin >> n;

  vector<int> permutation;
  vector<bool> chosen(n + 1, false);

  cout << "using search\n";
  search(permutation, chosen, n);

  cout << "using built in 'next permutation'\n";
  std_lib_next_permutation(permutation, n);
}
