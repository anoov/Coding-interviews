//
// Created by 孙卓文 on 2020/3/24.
//

#ifndef LEETCODE_53_SEARCH_H
#define LEETCODE_53_SEARCH_H
int findFirst(vector<int>& nums, int size, int target) {
    int left = 0;
    int right = size-1;
    while (left <= right) {
        int mid = (left + right)/2;
        if (nums[mid] == target) {
            if ((mid > 0 && nums[mid-1]!= target) || mid == 0)
                return mid;
            else
                right = mid - 1;
        }
        else if (nums[mid] < target)
            left = mid+1;
        else
            right = mid-1;
    }
    // if (left == right) return left;
    return -1;
}
int findLast(vector<int>& nums, int size, int target) {
    int left = 0;
    int right = size-1;
    while (left <= right) {
        int mid = (left+right)/2;
        if (nums[mid] == target) {
            if ((mid < size-1 && nums[mid+1] != target) || mid == size - 1)
                return mid;
            else
                left = mid + 1;
        }
        else if (nums[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    // if (left == right) return left;
    return -1;
}
int search(vector<int>& nums, int target) {
    if (nums.empty()) return 0;
    int len = nums.size();
    int first_index = findFirst(nums, len, target);
    int last_index = findLast(nums, len, target);
    // cout << first_index << last_index << endl;
    if (first_index == -1 || last_index == -1) return 0;
    return last_index - first_index + 1;
}
#endif //LEETCODE_53_SEARCH_H
