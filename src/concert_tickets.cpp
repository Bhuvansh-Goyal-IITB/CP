#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  cin >> n >> m;

  multiset<int> tickets;
  vector<int> customer_prices;

  while (n--) {
    int val;
    cin >> val;
    tickets.insert(val);
  }

  while (m--) {
    int val;
    cin >> val;
    customer_prices.push_back(val);
  }

  for (int price : customer_prices) {
    if (tickets.empty()) {
      cout << -1 << "\n";
      continue;
    }

    auto it = tickets.upper_bound(price);

    if (it == tickets.begin()) {
      if (*it > price) {
        cout << -1 << "\n";
      } else {
        tickets.erase(it);
        cout << price << "\n";
      }
      continue;
    }

    it--;
    cout << *it << "\n";
    tickets.erase(it);
  }

  return 0;
}
