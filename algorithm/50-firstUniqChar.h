//
// Created by 孙卓文 on 2020/3/23.
//

#ifndef LEETCODE_50_FIRSTUNIQCHAR_H
#define LEETCODE_50_FIRSTUNIQCHAR_H
bool compare(const pair<int, int>& x, const pair<int, int>& y) {
    if (x.second >= 0 && y.second >= 0)
        return x.second < y.second;
    else if (x.second < 0)
        return false;
    else
        return true;
}
char firstUniqChar(string s) {
    if (s.empty()) return ' ';
    vector<pair<int, int>> tmp(256, pair<int, int>(-1, -1));
    for (int i = 0; i < s.size(); i++) {
        if (tmp[s[i]].second == -1) {
            tmp[s[i]].first = s[i];
            tmp[s[i]].second = i;
        }
        else if(tmp[s[i]].second >= 0)
            tmp[s[i]].second = -2;
    }
    for (const auto elem:tmp)
        cout << elem.first << " " << elem.second << endl;
    sort(tmp.begin(), tmp.end(), compare);
    cout << "......." << endl;
    for (const auto elem:tmp)
        cout << elem.first << " " << elem.second << endl;
    return tmp[0].first;

}

#endif //LEETCODE_50_FIRSTUNIQCHAR_H
