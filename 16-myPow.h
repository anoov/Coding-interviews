//
// Created by 孙卓文 on 2020/3/16.
//

#ifndef LEETCODE_16_MYPOW_H
#define LEETCODE_16_MYPOW_H
double myPowWithUnsigned(double x, unsigned int n) {
    if (n == 0) return 1;
    if (n == 1) return x;
    double result = myPowWithUnsigned(x, n>>1);
    result *= result;
    if (n & 0x1 == 1)
        result *= x;
    return result;
}

double myPow(double x, int n) {
    if (x - 0 >= -0.0000001 && x - 0 <= 0.0000001) return 0.0;
    if (x - 1 >= -0.0000001 && x - 1 <= 0.0000001) return 1.0;
    long long_n = (long)n;
    unsigned int absN = (unsigned int)long_n;
    if (long_n < 0)
        absN = (unsigned int)(-long_n);
    double result = myPowWithUnsigned(x, absN);
    if (n < 0)
        return 1.0/result;
    return result;
}

#endif //LEETCODE_16_MYPOW_H
