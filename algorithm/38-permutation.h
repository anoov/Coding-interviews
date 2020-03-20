//
// Created by 孙卓文 on 2020/3/20.
//

#ifndef LEETCODE_38_PERMUTATION_H
#define LEETCODE_38_PERMUTATION_H
void permutation(string& s, int start, set<string>& vec) {
    if (start == s.size()) vec.insert(s);
    else {
        for (int i = start; i < s.size(); ++i) {
            // if (s[start] == s[i]) continue;
            swap(s[start], s[i]);
            permutation(s, start+1, vec);
            swap(s[start], s[i]);
        }
    }
}
vector<string> permutation(string s) {
    vector<string> vec;
    set<string> tmp_set;
    if (s.empty()) return vec;
    permutation(s, 0, tmp_set);
    return vector<string>(tmp_set.begin(), tmp_set.end());
}

#endif //LEETCODE_38_PERMUTATION_H
