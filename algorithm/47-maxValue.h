//
// Created by 孙卓文 on 2020/3/23.
//

#ifndef LEETCODE_47_MAXVALUE_H
#define LEETCODE_47_MAXVALUE_H
int maxValue(vector<vector<int>>& grid) {
    int row = grid.size();
    int col = grid[0].size();
    vector<vector<int>> maxValue(row, vector<int>(col, 0));
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            int left = 0;
            int up = 0;
            if (i > 0)
                up = maxValue[i-1][j];
            if (j > 0)
                left = maxValue[i][j-1];
            maxValue[i][j] = max(left, up) + grid[i][j];

        }
    }
    return maxValue[row-1][col-1];
}
#endif //LEETCODE_47_MAXVALUE_H
