#include <bits/stdc++.h>
using namespace std;

#define ll long long

void print_binary(int num, int n) {
  for (int i = n - 1; i >= 0; i--) {
    int mask = 1 << i;
    if ((num & mask) == mask) {
      cout << 1;
    } else {
      cout << 0;
    }
  }

  cout << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  vector<int> arr;
  int size = 2;

  arr.push_back(0);
  arr.push_back(1);

  print_binary(0, n);
  print_binary(1, n);

  for (int i = 1; i < n; i++) {
    int mask = 1 << i;
    for (int j = size - 1; j >= 0; j--) {
      int new_num = mask | arr[j];
      print_binary(new_num, n);
      arr.push_back(new_num);
    }

    size *= 2;
  }

  return 0;
}
