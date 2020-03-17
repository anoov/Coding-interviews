//
// Created by 孙卓文 on 2020/3/16.
//

#ifndef LEETCODE_17_PRINTNUMBERS_H
#define LEETCODE_17_PRINTNUMBERS_H

std::vector<int> printNumbers(int n) {
    int number = 1;
    int i = 0;
    std::vector<int> res;
    while (i++ < n)
        number *= 10;
    for (int i = 1; i < number; ++i)
        res.push_back(i);
    return res;
}
#endif //LEETCODE_17_PRINTNUMBERS_H
