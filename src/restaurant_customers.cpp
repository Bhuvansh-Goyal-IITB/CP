#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  vector<int> arrival;
  vector<int> departure;
  int size = n;

  while (n--) {
    int a, l;
    cin >> a >> l;

    arrival.push_back(a);
    departure.push_back(l);
  }

  sort(arrival.begin(), arrival.end());
  sort(departure.begin(), departure.end());

  int curr_persons = 0;
  int max_persons = 0;

  int i = 0, j = 0;

  while (i < size && j < size) {
    if (arrival[i] < departure[j]) {
      i++;
      curr_persons++;
      max_persons = max(curr_persons, max_persons);
    } else {
      j++;
      curr_persons--;
    }
  }

  cout << max_persons << "\n";
}
