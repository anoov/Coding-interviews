//
// Created by 孙卓文 on 2020/3/16.
//

#ifndef LEETCODE_12_EXIST_H
#define LEETCODE_12_EXIST_H
bool exist(std::vector<std::vector<char>>& board, int rows, int cols, int row, int col,
           std::string word, int &pathLength, std::vector<std::vector<bool>>& visited) {
    if (pathLength == word.size()) return true;
    bool hasPath = false;
    if (row >= 0 && row < rows && col >= 0 && col < cols && board[row][col] == word[pathLength] && !visited[row][col]) {
        ++pathLength;
        visited[row][col] = true;
        hasPath = exist(board, rows, cols, row, col-1, word, pathLength, visited) ||
                  exist(board, rows, cols, row-1, col, word, pathLength, visited) ||
                  exist(board, rows, cols, row, col+1, word, pathLength, visited) ||
                  exist(board, rows, cols, row+1, col, word, pathLength, visited);

        if (!hasPath) {
            --pathLength;
            visited[row][col] = false;
        }
    }
    return hasPath;
}

bool exist(std::vector<std::vector<char>>& board, std::string& word) {
    int rows = board.size();
    int cols = board[0].size();
    std::vector<std::vector<bool>> visited(rows, std::vector<bool>(cols, false));
    int pathLength = 0;
    for (int row = 0; row < rows; ++row) {
        for (int col = 0; col < cols; ++col) {
            if (exist(board, rows, cols, row, col, word, pathLength, visited))
                return true;
        }
    }
    return false;
}
#endif //LEETCODE_12_EXIST_H
