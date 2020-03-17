//
// Created by 孙卓文 on 2020/3/17.
//

#ifndef LEETCODE_11_NUMWAYS_H
#define LEETCODE_11_NUMWAYS_H
int numWays(int n) {
    if (n == 0)
        return 1;
    long long one = 1;
    long long two = 2;
    if (n <= 2 && n >= 1)
        return n;
    long long ret = one + two;
    for (int i = 3; i <= n; i++) {
        ret = (one + two)%1000000007;
        one = two;
        two = ret;
    }
    return ret;
}
#endif //LEETCODE_11_NUMWAYS_H
