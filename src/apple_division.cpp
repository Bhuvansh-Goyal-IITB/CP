#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  int *arr = new int[n];
  int size = n;

  int index = 0;
  while (n--) {
    cin >> arr[index++];
  }

  ll total_sum = 0;
  for (int i = 0; i < size; i++) {
    total_sum += arr[i];
  }

  int min = INT_MAX;
  for (int i = 1; i < (1 << size); i++) {
    ll subset_sum = 0;
    for (int j = 0; j < size; j++) {
      int mask = 1 << j;
      if ((i & mask) == mask) {
        subset_sum += arr[size - j - 1];
      }
    }

    ll weight_difference = total_sum - subset_sum;
    weight_difference -= subset_sum;
    weight_difference = abs(weight_difference);

    if (weight_difference < min) {
      min = weight_difference;
    }
  }
  cout << min << "\n";
}
