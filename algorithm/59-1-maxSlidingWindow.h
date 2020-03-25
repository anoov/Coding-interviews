//
// Created by 孙卓文 on 2020/3/25.
//

#ifndef LEETCODE_59_1_MAXSLIDINGWINDOW_H
#define LEETCODE_59_1_MAXSLIDINGWINDOW_H
vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    if (nums.empty()) return nums;
    vector<int> max;
    deque<int> d;
    for (int i = 0; i < k; i++) {
        while (!d.empty() && nums[d.back()] <= nums[i]) {
            d.pop_back();
        }
        d.push_back(i);
    }
    for (int i = k; i < nums.size(); i++) {
        max.push_back(nums[d.front()]);
        while (!d.empty() && nums[i] >= nums[d.back()]) {
            d.pop_back();
        }
        if (!d.empty() && d.front() <= int(i - k))
            d.pop_front();
        d.push_back(i);
    }
    max.push_back(nums[d.front()]);
    return max;
}
#endif //LEETCODE_59_1_MAXSLIDINGWINDOW_H
