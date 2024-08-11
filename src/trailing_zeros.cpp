#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll n;
  cin >> n;

  int five_count = 0;

  short int *arr = new short int[n / 5];
  int index = 0;

  for (ll i = 5; i <= n; i += 5) {
    ll remaining = i / 5;

    if (remaining % 5 == 0) {
      int count = 1 + arr[(remaining / 5) - 1];
      arr[index++] = count;
      five_count += count;
    } else {
      arr[index++] = 1;
      five_count++;
    }
  }

  cout << five_count << "\n";
  delete[] arr;
}
