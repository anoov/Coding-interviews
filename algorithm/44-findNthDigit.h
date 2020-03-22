//
// Created by 孙卓文 on 2020/3/22.
//

#ifndef LEETCODE_44_FINDNTHDIGIT_H
#define LEETCODE_44_FINDNTHDIGIT_H
//输入位数，得到n位共占几位
long countOfIntegers(int n) {
    if (n == 1)
        return 10;
    return 9 * pow(10, n-1) * n;
}
int findNthDigit(int n) {
    if (n < 10) return n;
    int i = 1;
    while (true) {
        long tmp = countOfIntegers(i);
        if (n - tmp < 0) {
            break;
        }
        n -= tmp;
        i++;
    }
    int consult = n / i;        //商   是从第i位的开始的第consult个数
    int remainder = n % i;      //余数
    string str_consult = to_string(consult+pow(10, i-1));
    return str_consult[remainder] - '0';

}
#endif //LEETCODE_44_FINDNTHDIGIT_H
