//
// Created by 孙卓文 on 2020/3/20.
//

#ifndef LEETCODE_42_MAXSUBARRAY_H
#define LEETCODE_42_MAXSUBARRAY_H
int maxSubArray(vector<int>& nums) {
    if (nums.empty()) return 0;
    vector<int> tmp;
    tmp.push_back(nums.front());
    for (int i = 1; i < nums.size(); ++i) {
        tmp.push_back(max(nums[i], nums[i]+tmp.back()));
    }
    return *max_element(tmp.begin(), tmp.end());
}
#endif //LEETCODE_42_MAXSUBARRAY_H
