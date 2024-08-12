#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s;
  cin >> s;

  sort(s.begin(), s.end());
  vector<string> arr;

  do {
    arr.push_back(s);
  } while (next_permutation(s.begin(), s.end()));

  cout << arr.size() << "\n";
  for (string str : arr) {
    cout << str << "\n";
  }
}
