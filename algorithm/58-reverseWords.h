//
// Created by 孙卓文 on 2020/3/25.
//

#ifndef LEETCODE_58_REVERSEWORDS_H
#define LEETCODE_58_REVERSEWORDS_H
void reverse_core(string& s, int start, int end) {
    end--;
    while (start < end) {
        swap(s[start++], s[end--]);
    }
}
string reverseWords(string s) {
    if (s.empty() || s == string(s.size(), ' ')) return "";
    istringstream stream(s);
    string tmp;
    string ret;
    while(stream >> tmp) {
        reverse_core(tmp, 0, tmp.size());
        tmp += " ";
        ret += tmp;
    }
    ret.pop_back();
    reverse_core(ret, 0, ret.size());
    return ret;
}

#endif //LEETCODE_58_REVERSEWORDS_H
