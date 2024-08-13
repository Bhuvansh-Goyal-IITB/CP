#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int *input = new int[n];
    bool *arr = new bool[n]{false};

    int size = n;

    bool order_followed = true;
    bool is_empty = true;

    int index = 0;
    while (n--) {
      cin >> input[index++];
    }

    for (int i = 0; i < size; i++) {
      int seat = input[i];
      if (is_empty) {
        is_empty = false;
        arr[seat - 1] = true;
        continue;
      }

      if (seat == size && !arr[seat - 2]) {
        order_followed = false;
        break;
      }

      if (seat == 1 && !arr[seat]) {
        order_followed = false;
        break;
      }

      if (seat > 1 && seat < size && !arr[seat - 2] && !arr[seat]) {
        order_followed = false;
        break;
      }

      arr[seat - 1] = true;
    }

    if (order_followed) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }

    delete[] arr;
    delete[] input;
  }

  return 0;
}
