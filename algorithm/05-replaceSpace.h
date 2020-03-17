//
// Created by 孙卓文 on 2020/3/17.
//

#ifndef LEETCODE_05_REPLACESPACE_H
#define LEETCODE_05_REPLACESPACE_H
string replaceSpace(string s) {
    int numOfSpace = 0;
    for (const auto& elem: s) {
        if (elem == ' ')
            numOfSpace++;
    }
    int beforeEnd = s.size()-1;
    int afterEnd = beforeEnd + 2 * numOfSpace;
    s.resize(afterEnd+1);
    while (beforeEnd != afterEnd) {
        if (s[beforeEnd] != ' ')
            s[afterEnd--] = s[beforeEnd];
        else {
            s[afterEnd--] = '0';
            s[afterEnd--] = '2';
            s[afterEnd--] = '%';
        }
        beforeEnd--;
    }
    return s;
}
#endif //LEETCODE_05_REPLACESPACE_H
