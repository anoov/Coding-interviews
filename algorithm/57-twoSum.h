//
// Created by 孙卓文 on 2020/3/25.
//

#ifndef LEETCODE_57_TWOSUM_H
#define LEETCODE_57_TWOSUM_H
vector<int> twoSum(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size()-1;
    while (left <= right) {
        if (nums[left] + nums[right] == target)
            return vector<int>{nums[left], nums[right]};
        else if (nums[left] + nums[right] > target)
            right--;
        else
            left++;
    }
    return vector<int>{};
}
#endif //LEETCODE_57_TWOSUM_H
