#include <bits/stdc++.h>
using namespace std;

#define ll long long

class Solution {
 private:
  long long* factorial;

 public:
  Solution() {
    factorial = new long long[11]{1,   1,    2,     6,      24,     120,
                                  720, 5040, 40320, 362880, 3628800};
  }

  ~Solution() { delete[] this->factorial; }

  pair<long long, long long> findPermutations(long long n, long long num) {
    if (n == 1) {
      return {1, num};
    }

    vector<long long> fm(10, 0);

    while (num > 0) {
      long long digit = num % 10;

      fm[digit]++;

      num /= 10;
    }

    long long wiz_nu = this->factorial[n];
    long long wiz_de = 1;

    long long ten_pow = 1;
    long long ret = 0;

    for (long long i = 0; i < 10; i++) {
      wiz_de *= this->factorial[fm[i]];

      for (long long j = 0; j < fm[i]; j++) {
        ret += ten_pow * i;
        ten_pow *= 10;
      }
    }

    long long wiz = wiz_nu / wiz_de;

    if (fm[0] == 0) {
      return {wiz, ret};
    }

    fm[0]--;
    long long woz_nu = this->factorial[n - 1];
    long long woz_de = 1;

    for (int i = 0; i < 10; i++) {
      woz_de *= this->factorial[fm[i]];
    }

    long long woz = woz_nu / woz_de;

    long long ans = wiz - woz;

    return {ans, ret};
  }

  long long countGoodIntegers(int n, int k) {
    long long ans = 0;

    long long h = n / 2;
    if (n & 1) h++;

    long long ten_pow = pow(10, h - 1);
    long long num = ten_pow;

    unordered_map<long long, bool> m;
    while (num / (ten_pow * 10) == 0) {
      long long pal = num;
      long long tn = num;

      if (n & 1) tn /= 10;

      while (tn > 0) {
        long long digit = tn % 10;
        pal *= 10;
        pal += digit;

        tn /= 10;
      }

      if (pal % k == 0) {
        auto p = findPermutations(n, pal);
        if (!m[p.second]) {
          ans += p.first;
          m[p.second] = true;
        }
      }

      num++;
    }

    return ans;
  }
};

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, k;
  cin >> n >> k;

  Solution s;
  cout << s.countGoodIntegers(n, k) << "\n";
  return 0;
}
