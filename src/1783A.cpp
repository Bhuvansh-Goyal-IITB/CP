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

    vector<int> arr(n);
    vector<int> sum_arr(n);

    for (int i = 0; i < n; i++) {
      cin >> arr[i];

      if (i == 0) {
        sum_arr[i] = arr[i];
      } else {
        sum_arr[i] = sum_arr[i - 1] + arr[i];
      }
    }

    bool possible = true;

    for (int i = 1; i < n; i++) {
      if (arr[i] == sum_arr[i - 1]) {
        if (arr[i] != arr[i - 1]) {
          swap(arr[i], arr[i - 1]);
        } else {
          if (arr[i] == arr[n - 1]) {
            possible = false;
            break;
          }

          int ci = i;

          while (i < n && arr[i] == arr[ci]) i++;

          swap(arr[ci], arr[i]);
        }
      }
    }

    if (possible) {
      cout << "YES\n";
      for (int val : arr) {
        cout << val << " ";
      }
      cout << "\n";
    } else {
      cout << "NO\n";
    }
  }

  return 0;
}
