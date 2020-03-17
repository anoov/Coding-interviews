//
// Created by 孙卓文 on 2020/3/17.
//

#ifndef LEETCODE_19_ISMATCH_H
#define LEETCODE_19_ISMATCH_H

#include <string>
using namespace std;
bool isMatch(string &s, int s_index, string &p, int p_index) {
    if (s_index == s.size() && p_index == p.size())
        return true;
    if (s_index < s.size() && p_index == p.size())
        return false;
    if (p[p_index+1] == '*') {
        if (p[p_index] == s[s_index] || (p[p_index] == '.' && s_index != s.size())) {
            return isMatch(s, s_index+1, p, p_index+2) ||
                   isMatch(s, s_index, p, p_index+2) ||
                   isMatch(s, s_index+1, p, p_index);
        }
        else
            return isMatch(s, s_index, p, p_index+2);
    }
    if (p[p_index] == s[s_index] || (p[p_index] == '.' && s_index != s.size()))
        return isMatch(s, s_index+1, p, p_index+1);
    return false;
}
bool isMatch(string s, string p) {
    return isMatch(s, 0, p, 0);
}

#endif //LEETCODE_19_ISMATCH_H
