//
// Created by 孙卓文 on 2020/3/17.
//

#ifndef LEETCODE_04_FINDNUMBERIN2DARRAY_H
#define LEETCODE_04_FINDNUMBERIN2DARRAY_H

bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
    if (matrix.empty()) return false;
    int rows = matrix.size();
    int cols = matrix[0].size();
    int row = 0;
    int col = cols - 1;

    while (row < rows && col >= 0) {
        int tmp = matrix[row][col];
        if (target > tmp) {
            row++;
        }
        else if (target < tmp) {
            col--;
        }
        else {
            return true;
        }
    }
    return false;
}
#endif //LEETCODE_04_FINDNUMBERIN2DARRAY_H
