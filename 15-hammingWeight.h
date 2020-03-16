//
// Created by 孙卓文 on 2020/3/16.
//

#ifndef LEETCODE_15_HAMMINGWEIGHT_H
#define LEETCODE_15_HAMMINGWEIGHT_H

int hammingWeight(uint32_t n) {
    uint32_t tmp = 0x1;
    int num = 0;
    while (tmp) {
        if (n & tmp)
            num++;
        tmp = tmp << 1;
    }
    return num;
}

#endif //LEETCODE_15_HAMMINGWEIGHT_H
