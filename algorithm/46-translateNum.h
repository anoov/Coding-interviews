//
// Created by 孙卓文 on 2020/3/22.
//

#ifndef LEETCODE_46_TRANSLATENUM_H
#define LEETCODE_46_TRANSLATENUM_H
void countSum(string str, int start, int end, int &count) {
    if (end > str.size()) return;
    if (end == str.size()) {
        count ++;
        return;
    }
    if (stoi(str.substr(end, 1)) <= 25)
        countSum(str, end, end+1, count);
    if (str[end] != '0' && stoi(str.substr(end, 2)) <= 25)
        countSum(str, end, end+2, count);
}
int translateNum(int num) {
    string str = to_string(num);
    int len = str.size();
    int count = 0;
    countSum(str, 0, 0, count);
    return count;
}

#endif //LEETCODE_46_TRANSLATENUM_H
