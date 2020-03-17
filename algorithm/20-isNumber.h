//
// Created by 孙卓文 on 2020/3/17.
//

#ifndef LEETCODE_20_ISNUMBER_H
#define LEETCODE_20_ISNUMBER_H
#include <string>
using namespace std;

bool scanUnsigned(string s, int &index) {
    int before = index;
    while ((s[index] >= '0') && (s[index] <= '9'))
        index++;
    return index > before;
}

bool scanSigned(string s, int &index) {
    // if (index == s.size()) return true;
    if (index > s.size()) return false;
    if (s[index] == '+' || s[index] == '-') {
        index++;
    }
    return scanUnsigned(s, index);
}


bool isNumber(string s) {
    if (s.empty()) return false;
    while (s.back() == ' ')             //去掉前面的空格
        s.resize(s.size()-1);
    while (s.front() == ' ')            //去掉后面的空格
        s = s.substr(1);
    int index = 0;
    bool numeric = scanSigned(s, index);
    if (s[index] == '.') {
        index++;
        numeric = scanUnsigned(s, index) || numeric;
    }
    if (s[index] == 'e' || s[index] == 'E') {
        index++;
        numeric = scanSigned(s, index) && numeric;      //e前和e后必须有数字
    }
    return numeric && index == s.size();
}
#endif //LEETCODE_20_ISNUMBER_H
