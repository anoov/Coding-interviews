//
// Created by 孙卓文 on 2020/3/20.
//

#ifndef LEETCODE_39_MAJORITYELEMENT_H
#define LEETCODE_39_MAJORITYELEMENT_H
int majorityElement(vector<int>& nums) {
    if (nums.empty()) return 0;
    int result = nums[0];
    int times = 1;
    for (int i = 1; i < nums.size(); ++i) {
        if (times == 0) {
            result = nums[i];
            times = 1;
        }
        else if (result == nums[i])
            times++;
        else
            times--;
    }
    return result;
}
#endif //LEETCODE_39_MAJORITYELEMENT_H
