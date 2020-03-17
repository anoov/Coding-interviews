//
// Created by 孙卓文 on 2020/3/16.
//

#ifndef LEETCODE_13_MOVINGCOUNT_H
#define LEETCODE_13_MOVINGCOUNT_H
int getDigitSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int movingCount(int m, int n, int k, int row, int col, std::vector<std::vector<bool>>& visits) {
    int count = 0;
    if (row >= 0 && row < m && col >= 0 && col < n && (getDigitSum(row) + getDigitSum(col) <= k ) && !visits[row][col]) {
        visits[row][col] = true;
        count = 1 + movingCount(m, n, k, row, col-1, visits) +
                movingCount(m, n, k, row-1, col, visits) +
                movingCount(m, n, k, row, col+1, visits) +
                movingCount(m, n, k, row+1, col, visits);
    }
    return count;
}

int movingCount(int m, int n, int k) {
    if (m == 0 || n == 0) return 0;
    std::vector<std::vector<bool>> visits(m, std::vector<bool>(n, false));
    return movingCount(m, n, k, 0, 0, visits);
}


#endif //LEETCODE_13_MOVINGCOUNT_H
