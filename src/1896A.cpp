#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool solve(int *arr, int size) {
  while (true) {
    bool swap_made = false;
    for (int i = 1; i < size - 1; i++) {
      if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1]) {
        swap(arr[i], arr[i + 1]);
        swap_made = true;
      }
    }

    if (!swap_made) break;
  }

  for (int i = 1; i < size; i++) {
    if (arr[i - 1] >= arr[i]) {
      return false;
    }
  }

  return true;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int size = n;
    int *arr = new int[n];
    int index = 0;

    while (n--) {
      int val;
      cin >> val;
      arr[index++] = val;
    }

    if (solve(arr, size)) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }

    delete[] arr;
  }
}
