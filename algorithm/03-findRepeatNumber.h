//
// Created by 孙卓文 on 2020/3/15.
//

#ifndef LEETCODE_03_FINDREPEATNUMBER_H
#define LEETCODE_03_FINDREPEATNUMBER_H

int findRepeatNumber(std::vector<int>& nums) {
    int length = nums.size();
    for (int i = 0; i < length; i++) {
        while (nums[i] != i) {
            if (nums[i] == nums[nums[i]])
                return nums[i];
            // auto tmp = nums[i];
            // nums[i] = nums[tmp];
            // nums[tmp] = tmp;
            std::swap(nums[i], nums[nums[i]]);
        }
    }
    return -1;
}

#endif //LEETCODE_03_FINDREPEATNUMBER_H
