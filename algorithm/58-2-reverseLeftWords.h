//
// Created by 孙卓文 on 2020/3/25.
//

#ifndef LEETCODE_58_2_REVERSELEFTWORDS_H
#define LEETCODE_58_2_REVERSELEFTWORDS_H
string reverseLeftWords(string s, int n) {
    string ret;
    ret += s.substr(n);
    ret += s.substr(0, n);
    return ret;
}
#endif //LEETCODE_58_2_REVERSELEFTWORDS_H
