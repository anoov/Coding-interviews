//
// Created by 孙卓文 on 2020/3/25.
//

#ifndef LEETCODE_56_1SINGLENUMBERS_H
#define LEETCODE_56_1SINGLENUMBERS_H
unsigned int findFirstBitsIs1(int num) {
    int indexBit = 0;
    while ((num&1) == 0 && (indexBit < 8 * sizeof(int))) {
        num = num >> 1;
        ++indexBit;
    }
    return indexBit;
}
bool IsBit1(int num, unsigned int indexBit) {
    num = num >> indexBit;
    return (num&1);
}
vector<int> singleNumbers(vector<int>& nums) {
    unsigned int tmp = nums.front();
    for (int i = 1; i < nums.size(); ++i) {
        tmp ^= nums[i];
    }
    int ret1 = 0;
    int ret2 = 0;
    unsigned int indexOf1 = findFirstBitsIs1(tmp);
    for (int j = 0; j < nums.size(); j++) {
        if (IsBit1(nums[j], indexOf1))
            ret1 ^= nums[j];
        else
            ret2 ^= nums[j];
    }
    return vector<int>{ret1, ret2};
}

#endif //LEETCODE_56_1SINGLENUMBERS_H
