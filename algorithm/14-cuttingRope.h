//
// Created by 孙卓文 on 2020/3/16.
//

#ifndef LEETCODE_14_CUTTINGROPE_H
#define LEETCODE_14_CUTTINGROPE_H
int cuttingRope(int n) {
    if (n == 2) return 1;
    if (n == 3) return 2;
    std::vector<int> vec;
    for (int i = 0; i < 4; ++i) {
        vec.push_back(i);
    }
    for (int i = 4; i <= n; ++i) {
        int max = 0;
        for (int j = 1; j <= i / 2; ++j) {
            int product = vec[j] * vec[i - j];
            max = product > max ? product : max;
        }
        vec.push_back(max);
    }
    return vec[n];
}
#endif //LEETCODE_14_CUTTINGROPE_H
