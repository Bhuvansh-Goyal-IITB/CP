#include <bits/stdc++.h>
using namespace std;

#define ll long long

// link to the question: https://www.naukri.com/code360/problems/758961

bool isValid(int matrix[9][9], int row, int col) {
  int val = matrix[row][col];

  for (int r = 0; r < 9; r++) {
    if (r == row) continue;
    if (matrix[r][col] == val) return false;
  }

  for (int c = 0; c < 9; c++) {
    if (c == col) continue;
    if (matrix[row][c] == val) return false;
  }

  for (int r = 3 * (row / 3); r < (3 * (row / 3)) + 3; r++) {
    for (int c = 3 * (col / 3); c < (3 * (col / 3)) + 3; c++) {
      if (row == r && col == c) continue;
      if (matrix[r][c] == val) return false;
    }
  }

  return true;
}

bool solve(int matrix[9][9], int row, int col) {
  int next_row = row;
  int next_col = col + 1;

  if (next_col / 9 == 1) {
    next_col = 0;
    next_row++;
  }

  if (next_row == 9) {
    return true;
  }

  if (matrix[row][col] == 0) {
    for (int i = 1; i <= 9; i++) {
      matrix[row][col] = i;
      if (isValid(matrix, row, col) && solve(matrix, next_row, next_col)) {
        return true;
      }
    }

    matrix[row][col] = 0;
    return false;
  }

  return solve(matrix, next_row, next_col);
}

bool isItSudoku(int matrix[9][9]) { return solve(matrix, 0, 0); }

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int matrix[9][9];
  for (int row = 0; row < 9; row++) {
    for (int col = 0; col < 9; col++) {
      cin >> matrix[row][col];
    }
  }

  if (isItSudoku(matrix)) {
    cout << "yes\n";
  } else {
    cout << "no\n";
  }

  return 0;
}
