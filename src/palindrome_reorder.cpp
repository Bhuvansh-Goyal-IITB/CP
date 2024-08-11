#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s;
  cin >> s;

  int size = s.size();

  int *arr = new int[26]{0};

  for (char ch : s) {
    arr[ch - 'A']++;
  }

  bool has_odd = false;
  for (int i = 0; i < 26; i++) {
    if (size & 1 && arr[i] & 1) {
      if (!has_odd) {
        has_odd = true;
        continue;
      }
      cout << "NO SOLUTION\n";
      return 0;
    }

    if (arr[i] & 1) {
      cout << "NO SOLUTION\n";
      return 0;
    }
  }

  char middle = 0;
  int middle_count = 0;

  for (int i = 0; i < 26; i++) {
    if (arr[i] & 1) {
      middle = static_cast<char>('A' + i);
      middle_count = arr[i];
      continue;
    }
    for (int j = 0; j < arr[i] / 2; j++) {
      cout << static_cast<char>('A' + i);
    }
  }

  if (middle != 0) {
    for (int i = 0; i < middle_count; i++) {
      cout << middle;
    }
  }

  for (int i = 25; i >= 0; i--) {
    if (arr[i] & 1) continue;
    for (int j = 0; j < arr[i] / 2; j++) {
      cout << static_cast<char>('A' + i);
    }
  }

  cout << "\n";

  return 0;
}
