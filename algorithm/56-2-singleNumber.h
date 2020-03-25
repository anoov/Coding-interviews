//
// Created by 孙卓文 on 2020/3/25.
//

#ifndef LEETCODE_56_2_SINGLENUMBER_H
#define LEETCODE_56_2_SINGLENUMBER_H
int singleNumber(vector<int>& nums) {
    vector<int> sum(32);
    for (int i = 0; i < nums.size(); ++i) {
        unsigned int mask = 0x1;
        for (int j = 0; j < 32; j++) {
            int bit = nums[i] & mask;
            if (bit != 0)
                sum[j] += 1;
            mask = mask << 1;
        }
    }

    bitset<32> bitvec("0");
    for(int i = 0; i < 32; i++) {
        if (sum[i] % 3 == 0)
            bitvec.reset(i);
        else
            bitvec.set(i);
    }
    return bitvec.to_ulong();
}
#endif //LEETCODE_56_2_SINGLENUMBER_H
