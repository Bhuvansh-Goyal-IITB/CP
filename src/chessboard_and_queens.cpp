#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(char arr[8][8], int *count, int row_index, bool *diag1, bool *diag2,
           bool *col) {
  if (row_index >= 8) {
    (*count)++;
    return;
  }

  for (int col_index = 0; col_index < 8; col_index++) {
    if (arr[row_index][col_index] == '*') continue;

    if (diag1[row_index + col_index] || diag2[row_index + 7 - col_index] ||
        col[col_index]) {
      continue;
    }

    diag1[row_index + col_index] = diag2[row_index + 7 - col_index] =
        col[col_index] = true;
    solve(arr, count, row_index + 1, diag1, diag2, col);
    diag1[row_index + col_index] = diag2[row_index + 7 - col_index] =
        col[col_index] = false;
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  char input[8][8];

  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      cin >> input[i][j];
    }
  }

  bool diag1[15] = {false};
  bool diag2[15] = {false};

  bool col[8] = {false};

  int count = 0;

  solve(input, &count, 0, diag1, diag2, col);

  cout << count << "\n";
}
