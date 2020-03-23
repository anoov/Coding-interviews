//
// Created by 孙卓文 on 2020/3/23.
//

#ifndef LEETCODE_49_NTHUGLYNUMBER_H
#define LEETCODE_49_NTHUGLYNUMBER_H
bool IsUgly(int num) {
    if (num == 1) return true;
    while (num % 2 == 0)
        num /= 2;
    while (num % 3 == 0)
        num /= 3;
    while (num % 5 == 0)
        num /= 5;
    return num == 1;
}
int nthUglyNumber(int n) {
    if (n <= 0) return 0;
    int i = 0;
    int num = 0;
    while (i < n) {
        num++;
        if (IsUgly(num)) {
            i++;
        }
    }
    return num;
}

#endif //LEETCODE_49_NTHUGLYNUMBER_H
