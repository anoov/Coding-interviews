//
// Created by 孙卓文 on 2020/3/25.
//

#ifndef LEETCODE_57_2_FINDCONTINUOUSSEQUENCE_H
#define LEETCODE_57_2_FINDCONTINUOUSSEQUENCE_H
vector<vector<int>> findContinuousSequence(int target) {
    int left = 1;
    int right = 1;
    int sum = 1;
    vector<vector<int>> ret;
    while (left <= target/2) {
        if (sum == target) {
            vector<int> tmp;
            for (int i = left; i <= right; ++i) {
                tmp.push_back(i);
            }
            ret.push_back(tmp);
            right++;
            sum += right;
        }
        else if (sum > target) {
            sum -= left;
            left++;
        }
        else {
            right++;
            sum += right;
        }
    }
    return ret;
}
#endif //LEETCODE_57_2_FINDCONTINUOUSSEQUENCE_H
